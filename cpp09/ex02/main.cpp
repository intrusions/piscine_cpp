/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:06 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/22 19:10:53 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av) {

	PmergeMe pm;

	try {
		pm.arg_is_valid(ac, av);
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
		return (EXIT_FAILURE);
	}

	pm.print_before(ac, av);
	pm.fill_vector_c(ac, av);
	pm.ford_johson_vector_c();
	pm.print_after();
	pm.print_time_vector_c();
	pm.print_time_list_c();
}