/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:18:03 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/19 13:57:35 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int	main() {
	
	int int_array[] = { 1, 2, 3, 4, 5, 6 };
	iter<int>(int_array, 6, print);
	std::cout << "\n---------------" << std::endl;


	char char_array[] = { 'h', 'e', 'l', 'l', 'o' };
	iter<char>(char_array, 5, print);
	std::cout << "\n---------------" << std::endl;


	float float_array[] = { 1.1f, 1.2f, 1.3f, 1.4f, 1.5 };
	iter<float>(float_array, 5, print);
}