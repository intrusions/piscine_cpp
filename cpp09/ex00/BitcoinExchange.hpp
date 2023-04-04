/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:21:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/04 06:51:43 by jucheval         ###   ########.fr       */
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


class BitcoinExchange {
	private:
		std::map<std::string, double>	_input_file;
		std::map<std::string, double>	_db;

	public:
		bool	parse_input_file(char* const file_name);
	
};