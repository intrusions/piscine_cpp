/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:14:00 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/12 03:46:01 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main() {
	
	std::vector<int> arr;

	for (uint16_t i = 0; i < 6; i++)
		arr.push_back(i);

	try {
		std::vector<int>::iterator it = easyfind(arr, 3);
		
		std::cout << std::distance(arr.begin(), it) << std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
}