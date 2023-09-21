/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:11:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/21 18:31:44 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main (int ac, char **av) {
	
	if (ac != 2) {
		std::cout << "wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}

	RPN rpn;

	try {
		rpn.calcul(av[1]);
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}