/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 03:14:28 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/19 16:44:54 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl	harl;

	harl.complain("ERROR");
	std::cout << std::endl;
	
	harl.complain("DEBUG");
	std::cout << std::endl;
	
	harl.complain("INFO");
	std::cout << std::endl;
	
	harl.complain("WARNING");
}