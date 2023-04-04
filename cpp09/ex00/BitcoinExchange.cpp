/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:33:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/04 08:35:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	BitcoinExchange::parse_input_file(char* const file_name) {
	
	std::ifstream	input_file(file_name);
	std::string		line;
	std::string		splited_line;
	
	if (input_file) {
		
		/* tcheck if the first line is "data | value" */
		if (std::getline(input_file, line)) {
			if (line != "date | value") {
				std::cout << "bad format" << std::endl;
				return (0);
			}
		}
		
		/* boucle on each line */
		while (std::getline(input_file, line)) {
			std::stringstream	ss(line);
			std::string			date, value;
			double				converted_value;
			
			/* split on '|', and stock the date and value in different std::string */
			if (std::getline(ss, date, '|') && std::getline(ss, value)) {
				
				/* delete space in date, convert value in double, creat a pair and push it in container */
				date.erase(remove_if(date.begin(), date.end(), ::isspace), date.end());
				converted_value = atof(value.c_str());
				_input_file.insert(std::make_pair(date, converted_value));

			/* if no pipe or no value are present in line, print error */
			} else {
				std::cout << "error: bad input => " << date << std::endl;
			}
		}
	}
	else
		std::cout << "file does not exist" << std::endl;

	/* print data in container */
	for (std::map<std::string, double>::iterator it = _input_file.begin(); it != _input_file.end(); it++)
		std::cout << it->first << " " << it->second << std::endl;
	return (0);
}
