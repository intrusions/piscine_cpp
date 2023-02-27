/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:15:33 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 07:55:28 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;

	Fixed const comp(Fixed(4) > Fixed(5));
	std::cout << comp << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	
	// std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}