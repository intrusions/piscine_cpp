/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:29:09 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed &r){
	std::cout << "Copy constructor called" << std::endl;
	_val = r.getRawBits();
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(Fixed &r) {
	std::cout << "Copy assignment operator called" << std::endl;
	_val = r.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const {
	std::cout << "GetRawBits member function called" << std::endl;
	return (_val);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_val = raw;
}
