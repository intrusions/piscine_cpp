/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:06 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/30 23:50:38 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av) {

	PmergeMe pm;

	try {
		/*
		* Check if main argument's are valid and print the list before any
		* modification on it.
		*/
		pm.arg_is_valid(ac, av);
		pm.print_before(ac, av);
		
		/* 
		 * Start the ford-johson algorithm on a vector and deque container.
		*/
		pm.start_ford_johson_vector_c(ac, av);
		pm.start_ford_johson_deque_c(ac, av);
		
		/*
		 * Print the list after the ford-johson sort on our vector and deque container.
		 * Print time of executing algortihm of each type of container.
		 */
		pm.print_after();
		pm.print_time_vector_c(ac);
		pm.print_time_deque_c(ac);
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
		return (EXIT_FAILURE);
	}
}
