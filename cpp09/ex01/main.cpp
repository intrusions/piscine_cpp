/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:11:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/20 18:53:25 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main (int ac, char **av) {
	
	(void)ac;
	RPN rpn;
	std::string input(av[1]);


	if (rpn.input_is_valid(input)) {
		std::cout << "string is valid" << std::endl;
		rpn.fill_stack(input);
		// rpn.calcul();
	} else {
		std::cout << "string is not valid" << std::endl;
	}
}