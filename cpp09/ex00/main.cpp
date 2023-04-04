/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 04:52:49 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/04 05:59:36 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "put a file in params of prog" << std::endl;
		return (0);
	}
	
	BitcoinExchange	_data;

	if (!_data.parse_input_file(argv[1])) {
		
	}
}



/*
	ROAD MAP
	
	1 - split on pipe for each line in input file, and stock the date and value in key-value container (std::map)
	2 - parse the container, and tcheck in first time the date format
	3 - parse the container, and tcheck in second time the value format (a float or a positiv number beetween 1 & 1000)
	4 - stock CSV db in other container of same type (std::map)
	5 - print each day of the input file => print each value of btc transaction => print price of this transaction (value of btc transac * price at this date)
*/