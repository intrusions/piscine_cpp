/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:18:03 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/12 02:53:43 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main() {
	{
		Array<int> arr(15);
		try {
			for (uint8_t i = 0; i < 15; i++)
				std::cout << arr[i] << std::endl;	
		} catch (std::exception &err) {
			std::cout << err.what() << std::endl;
		}
	}

	std::cout << "-------------------" << std::endl;
	{
		Array<int> arr = Array<int>(15);
		try {
			for (uint8_t i = 0; i < 15; i++)
				std::cout << arr[i] << std::endl;	
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
	}
}
