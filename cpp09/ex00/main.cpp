/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 04:52:49 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/04 10:57:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "put a file in params of prog" << std::endl;
		return (0);
	}
	
	BitcoinExchange	_data;
	if (_data.parse_csv_file()) {
		_data.parse_input_file(argv[1]);
	}
}
