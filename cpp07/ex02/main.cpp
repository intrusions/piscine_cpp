/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:18:03 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/19 14:44:39 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main() {
	{
		Array<int> arr(15);
		try {
			for (uint8_t i = 0; i < 15; i++)
				std::cout << arr2[i] << std::endl;	
		} catch (std::exception &err) {
			std::cout << err.what() << std::endl;
		}
	}

	std::cout << "-------------------" << std::endl;
	{
		Array<char> arr(15);
		try {
			for (uint8_t i = 0; i < 15; i++)
				std::cout << "'" << arr[i] << "'" << std::endl;	
		} catch (std::exception &err) {
			std::cout << err.what() << std::endl;
		}

		std::cout << "-------------------" << std::endl;
		try {
			std::cout << arr[16] << std::endl;
		} catch (std::exception &err) {
			std::cout << err.what() << std::endl;
		}
	}

	// std::cout << "-------------------" << std::endl;
	// {
	// 	Array<int> *arr = new Array<int>(15);
	// 	try {
	// 		for (uint8_t i = 0; i < 15; i++)
	// 			std::cout << arr[i] << std::endl;	
	// 	} catch (std::exception &err) {
	// 		std::cout << err.what() << std::endl;
	// 	}
	// }
}
