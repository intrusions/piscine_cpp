/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:39:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/19 16:50:18 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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
			
			default:
				std::cout << "Invalid level" << std::endl;
				return (1);
		}
		return (0);
	}
	std::cout << "Invalid parameters" << std::endl;
	return (1);
}
