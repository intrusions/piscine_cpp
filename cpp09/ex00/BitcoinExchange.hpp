/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:21:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/04 10:33:23 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <stdint.h>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits.h>



class BitcoinExchange {
	private:
		std::map<std::string, double>	_db;

	public:
		bool	parse_csv_file(void);
		bool	parse_input_file(char *input_file);
		
		uint8_t	check_date(std::string const date);
		uint8_t	check_value(float const value);

		bool	error_manager(uint8_t const date_error, uint8_t const value_error, std::string date);
	
		double	get_price_per_date(std::string const date);
};
