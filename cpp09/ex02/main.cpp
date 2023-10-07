/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:06 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/07 06:35:58 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av) {

	PmergeMe pm;

	try {
		/* check if only number are present in `**av`*/
		pm.arg_is_valid(ac, av);

		/* fill our `std::vector` container with our `std::pair` created with our orignal input,
		and check if any number overflow an `int32_t` */
		pm.fill_vector_c(ac, av);

		/* `debug` function to print our `_vector_c` pair */
		pm.__print_vector_element__();

		/* print before our list is sort */	
		pm.print_before(ac, av);

		/* sort our `_vector_c` list using ford_johson algorythm */	
		pm.start_ford_johson_vector_c();

		pm.__print_vector_element__();

		/* print element of list after sorting */	
		pm.print_after();
		
		/* print time of ford-johson algorythm to sort our `std::vector` container */	
		// pm.print_time_vector_c(ac);
		
		
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
		return (EXIT_FAILURE);
	}
}