/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:33:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/05 06:49:24 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

uint8_t	BitcoinExchange::check_date(std::string const date) {

	struct tm tm;

	if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
		return (1);
	return (0);
}

uint8_t	BitcoinExchange::check_value(float const value) {
	
	if (value <= 0)
		return (1);
	else if (value > 1000)
		return (2);
	return (0);	
}

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

double	BitcoinExchange::get_price_per_date(std::string const date) {

	char **arr = split(date.c_str(), '-');

	uint8_t y = atoi(arr[0]);
	uint8_t m = atoi(arr[1]);
	uint8_t d = atoi(arr[2]);
	
	std::map<std::string, double>::iterator it = _db.find(date);

	while (it == _db.end()) {
		
		std::stringstream	new_date;
		std::string			new_string;
		
		for (uint8_t years = y; years > 0; years--) {
			for (uint8_t mouth = m; mouth > 0; mouth--) {
				for (uint8_t day = d; day > 0; day--) {
					
					new_date << years << "-" << mouth << "-" << day;
					new_string = new_date.str();
					it = _db.find(new_string);
				}
			}
		}
	}
	return (it->second);
}

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

		/* boucle for each line */
		while (std::getline(input_file, line)) {
			
			std::stringstream	ss(line);
			std::string			date, value;
			float				converted_value;
			uint8_t				date_error, value_error;
			
			/* split on '|', stock the date in 'date', and the value in 'value' */
			if (std::getline(ss, date, '|') && std::getline(ss, value)) {
				
				/* convert value in double, and delete all space in date */
				converted_value = atof(value.c_str());
				date.erase(remove_if(date.begin(), date.end(), ::isspace), date.end());
				
				/* parse and return an error code if error finded */
				date_error = check_date(date);
				value_error = check_value(converted_value);

				/* if error was founded, error manager print error and return 0, else return 1 */
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
