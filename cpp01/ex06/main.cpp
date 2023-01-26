/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:39:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/27 00:12:30 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <cstring>

int main(int argc, char **argv) {
	
	if (argc == 2) {
		Harl harl;
		
		if (!strcmp(argv[1], "DEBUG"))
			harl.setLevelGravity(1);
		else if (!strcmp(argv[1], "INFO"))
			harl.setLevelGravity(2);
		else if (!strcmp(argv[1], "WARNING"))
			harl.setLevelGravity(3);
		else if (!strcmp(argv[1], "ERROR"))
			harl.setLevelGravity(4);
		else {
			std::cout << "Invalid input" << std::endl;
			return (1);
		}
		
		switch(harl.getLevelGravity()) {
			case 1:
				harl.printDebugMessage();
				harl.printInfoMessage();
				harl.printWarningMessage();
				harl.printErrorMessage();
				break ;
			
			case 2:
				harl.printInfoMessage();
				harl.printWarningMessage();
				harl.printErrorMessage();
				break ;
			
			case 3:
				harl.printWarningMessage();
				harl.printErrorMessage();
				break ;
			
			case 4:
				harl.printErrorMessage();
				break ;
		}
		return (0);
	}
	std::cout << "Invalid parameters" << std::endl;
	return (1);
}
