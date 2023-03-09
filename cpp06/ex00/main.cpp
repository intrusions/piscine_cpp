/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:04:52 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 09:37:58 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid input" << std::endl;
		return (1);
	}

	try {
		Convertor a(argv[1]);
	} catch(std::exception &err) {
		std::cout << err.what() << std::endl;
	}
}