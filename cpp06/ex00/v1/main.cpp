/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:04:52 by jucheval          #+#    #+#             */
/*   Updated: 2023/06/18 17:21:37 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid input" << std::endl;
		return (1);
	}

	try {
		ScalarConverter a(argv[1]);
		a.convert();
	} catch(std::exception &err) {
		std::cout << err.what() << std::endl;
	}
}