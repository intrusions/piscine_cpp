/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:33:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/06 07:05:51 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* function to check if the format and value in date are coherent */
uint8_t	BitcoinExchange::check_date(std::string const date) {

	struct tm tm;

	if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
		return (1);

	if (tm.tm_mday > 31 || tm.tm_mon > 12)
		return (1);
	
	return (0);
}

/* function to check if the value in input file is valid */
uint8_t	BitcoinExchange::check_value(float const value) {
	
	if (value <= 0)
		return (1);
	else if (value > 1000)
		return (2);
	return (0);	
}

/* if error is present in 'date_error' or 'value_error', print the appropriate message
and return 1 if error are, or 0 */
bool	BitcoinExchange::error_manager(uint8_t const date_error, uint8_t const value_error, std::string date) {
	
	if (date_error == 1)
		std::cout	<< "error: bad input => "
					<< date
					<< std::endl;

	else if (value_error == 1)
		std::cout	<< "error: not a positiv number"
					<< std::endl;
	
	else if (value_error == 2)
		std::cout	<< "error: too large number"
					<< std::endl;
	
	return (date_error || value_error);
}

/* search in _db the date, if date are not in, decrement the date and research.
when value is find, return it->second */
double BitcoinExchange::get_price_per_date(std::string date) {
 
	std::map<std::string, double>::iterator it = _db.find(date);
 
	while (it == _db.end()) {
 
		std::tm date_tm = {};
		std::istringstream ss(date);
		
		sscanf(date.c_str(), "%d-%d-%d", &date_tm.tm_year, &date_tm.tm_mon, &date_tm.tm_mday);
		date_tm.tm_year	-= 1900;
		date_tm.tm_mon	-= 1;
		
		std::time_t timestamp = std::mktime(&date_tm);
		timestamp		-= 86400;
		
		std::tm* new_date = std::localtime(&timestamp);
		char new_date_str[11];
		
		std::strftime(new_date_str, sizeof(new_date_str), "%Y-%m-%d", new_date);
		it = _db.find(new_date_str);
 
		if (it != _db.end())
			return (it->second);
		
		date = new_date_str;
	}
	return (it->second);
}
		
/* check if csv_file is valid and stock it in a std::map container */
bool	BitcoinExchange::parse_csv_file(void) {
	
	std::ifstream	csv_file("_data.csv");
	std::string		line;
	
	if (csv_file) {
		if (std::getline(csv_file, line)) {
			if (line != "date,exchange_rate") {
				std::cout << "error: bad csv format" << std::endl;
				return (0);
			}
		}
		
		while (std::getline(csv_file, line)) {
 			std::stringstream	ss(line);
			std::string			date, value;
			
			if (std::getline(ss, date, ',') && std::getline(ss, value))
				 _db.insert(std::make_pair(date, atof(value.c_str())));
		}
	} else {
		std::cout << "error: file does not exist" << std::endl;
		return (0);
	}
	return (1);
}

/* for each line in input_file, print the expected value, or error if one is found */
bool	BitcoinExchange::parse_input_file(char *input_file_name) {
	
	std::ifstream	input_file(input_file_name);
	std::string		line;

	/* check if input file format is valid */
	if (input_file) {
		if (std::getline(input_file, line)) {
			if (line != "date | value") {
				std::cout << "error: bad input file format" << std::endl;
				return (0);
			}
		}
		else
			std::cout << "error: file empty" << std::endl;

		/* boucle for each line in input file */
		while (std::getline(input_file, line)) {
			
			std::stringstream	ss(line);
			std::string			date, value;
			uint8_t				date_error, value_error;
			float				converted_value;
			
			/* split on '|', stock the date in 'date', and the value in 'value' */
			if (std::getline(ss, date, '|') && std::getline(ss, value)) {
				
				/* convert value in double, and delete all space in date */
				converted_value = atof(value.c_str());
				date.erase(remove_if(date.begin(), date.end(), ::isspace), date.end());
				
				/* parse and return an error code if error finded */
				date_error = check_date(date);
				value_error = check_value(converted_value);

				/* if error was founded, error_manager() print error and return 0, else return 1 */
				if (!error_manager(date_error, value_error, date))
					std::cout	<< date << "=>"
								<< value << " => "
								<< get_price_per_date(date) * converted_value
								<< std::endl;
			}
			else
				std::cout << "error: invalid pipe format" << std::endl;
		}
	}
	else {
		std::cout << "error: file does not exist" << std::endl;
		return (0);
	}
	return (1);
}
