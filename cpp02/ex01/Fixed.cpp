/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/31 09:40:06 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : val(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &r) : val(r.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->val = n << this->bits;
	return ;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->val = int(roundf(n * (1 << this->bits)));
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

float    Fixed::toFloat(void) const {
	return (this->val / (double)(1 << this->bits));
}

int    Fixed::toInt(void) const {
	return (this->val >> this->bits);
}

int	Fixed::getRawBits() const {
	return (this->val);
}

void Fixed::setRawBits(int const raw) {
	this->val = raw;
	return ;
}

std::ostream&	operator<<(std::ostream &os, const Fixed &obj) {
	
	os << obj.toFloat();
	return (os);
}

Fixed& 			Fixed::operator=(const Fixed &r) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->val = r.getRawBits();
	return (*this);
}
