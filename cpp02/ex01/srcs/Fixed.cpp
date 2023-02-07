/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:31:36 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &r) : _val(r.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	_val = n << _bits;
	return ;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	_val = int(roundf(n * (1 << _bits)));
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

float    Fixed::toFloat(void) const {
	return (_val / (double)(1 << _bits));
}

int    Fixed::toInt(void) const {
	return (_val >> _bits);
}

int	Fixed::getRawBits() const {
	return (_val);
}

void Fixed::setRawBits(int const raw) {
	_val = raw;
	return ;
}

std::ostream&	operator<<(std::ostream &os, const Fixed &obj) {
	
	os << obj.toFloat();
	return (os);
}

Fixed& 			Fixed::operator=(const Fixed &r) {
	std::cout << "Copy assignment operator called" << std::endl;
	_val = r.getRawBits();
	return (*this);
}
