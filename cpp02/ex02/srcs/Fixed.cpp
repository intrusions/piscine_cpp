/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/31 11:01:55 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : val(0){
	return ;
}

Fixed::Fixed(const Fixed &r) : val(r.getRawBits()){
	return ;
}

Fixed::Fixed(const int n) {
	this->val = n << this->bits;
	return ;
}

Fixed::Fixed(const float n) {
	this->val = int(roundf(n * (1 << this->bits)));
	return ;
}

Fixed::~Fixed() {
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
	this->val = r.getRawBits();
	return (*this);
}


/*ex02 parts*/

bool		Fixed::operator<(const Fixed &obj) {
	return (this->val < obj.val);
}

bool		Fixed::operator<=(const Fixed &obj) {
	return (this->val <= obj.val);
}

bool		Fixed::operator>(const Fixed &obj) {
	return (this->val > obj.val);
}

bool		Fixed::operator>=(const Fixed &obj) {
	return (this->val >= obj.val);
}

bool		Fixed::operator==(const Fixed &obj) {
	return (this->val == obj.val);
}

bool		Fixed::operator!=(const Fixed &obj) {
	return (this->val != obj.val);
}

int			Fixed::operator*(const Fixed &obj) {
	return (this->val * obj.val);
}

int			Fixed::operator/(const Fixed &obj) {
	return (this->val / obj.val);
}

int			Fixed::operator+(const Fixed &obj) {
	return (this->val + obj.val);
}

int			Fixed::operator-(const Fixed &obj) {
	return (this->val - obj.val);
}
