/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/12 02:21:08 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0) {}

Fixed::Fixed(const Fixed &r) : _val(r.getRawBits()) {}

Fixed::Fixed(const int n) : _val(n << _bits) {}

Fixed::Fixed(const float n) : _val((int)roundf(n * (1 << _bits))) {}

Fixed::~Fixed() {}

float	Fixed::toFloat(void) const { return (_val / (double)(1 << _bits)); }

int		Fixed::toInt(void) const { return (_val >> _bits); }

int		Fixed::getRawBits() const { return (_val); }

void	Fixed::setRawBits(int const raw) { _val = raw; }

std::ostream&	operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return (os);
}

Fixed&	Fixed::operator=(const Fixed &r) {
	if (this != &r)
		_val = r.getRawBits();
	return (*this);
}

/*ex02 parts*/
bool	Fixed::operator<(const Fixed &obj) const { return (getRawBits() < obj.getRawBits()); }
bool	Fixed::operator>(const Fixed &obj) const { return (getRawBits() > obj.getRawBits()); }
bool	Fixed::operator>=(const Fixed &obj) const { return (getRawBits() >= obj.getRawBits()); }
bool	Fixed::operator<=(const Fixed &obj) const { return (getRawBits() <= obj.getRawBits()); }
bool	Fixed::operator==(const Fixed &obj) const { return (getRawBits() == obj.getRawBits()); }
bool	Fixed::operator!=(const Fixed &obj) const { return (getRawBits() != obj.getRawBits()); }

Fixed	Fixed::operator+(const Fixed &obj) { return (toFloat() + obj.toFloat()); }
Fixed	Fixed::operator-(const Fixed &obj) { return (toFloat() - obj.toFloat()); }
Fixed	Fixed::operator*(const Fixed &obj) { return (toFloat() * obj.toFloat()); }
Fixed	Fixed::operator/(const Fixed &obj) { return (toFloat() / obj.toFloat()); }

Fixed	&Fixed::operator++() {
	_val++; 
	return (*this);
}

Fixed	&Fixed::operator--() {
	_val--; 
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	_val++;
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	_val--;
	return (tmp);
}

Fixed		&Fixed::min(Fixed &n1, Fixed &n2) { return (n1.getRawBits() < n2.getRawBits() ? n1 : n2); } 
Fixed		&Fixed::max(Fixed &n1, Fixed &n2) { return (n1.getRawBits() < n2.getRawBits() ? n2 : n1); } 

const Fixed	&Fixed::min(Fixed const &n1, Fixed const &n2) { return (n1.getRawBits() < n2.getRawBits() ? n1 : n2); } 
const Fixed	&Fixed::max(Fixed const &n1, Fixed const &n2) { return (n1.getRawBits() < n2.getRawBits() ? n2 : n1); } 
