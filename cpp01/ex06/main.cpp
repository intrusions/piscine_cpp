/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:39:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/20 19:58:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	
	if (argc == 2) {
		Harl harl;
		
		std::string levels[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};

		for (uint8_t i = 0; i < 4; i++)
			if (levels[i] == argv[1])
				harl.setLevelGravity(i + 1);
		
		switch (harl.getLevelGravity()) {
			case 1:
				harl.printDebugMessage();
			case 2:
				harl.printInfoMessage();
			case 3:
				harl.printWarningMessage();
			case 4:
				harl.printErrorMessage();
				break ;
			default:
				std::cout << "Invalid level" << std::endl;
				return (1);
		}
		return (0);
	}
	std::cout << "Invalid parameters" << std::endl;
	return (1);
}
