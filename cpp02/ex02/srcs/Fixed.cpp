/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 07:57:07 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0) {}

Fixed::Fixed(const Fixed &r) : _val(r.getRawBits()) {}

Fixed::Fixed(const int n) : _val(n << _bits) {}

Fixed::Fixed(const float n) : _val(int(roundf(n * (1 << _bits)))) {}

Fixed::~Fixed() {}

float	Fixed::toFloat(void) const {
	return (_val / (double)(1 << _bits));
}

int	Fixed::toInt(void) const {
	return (_val >> _bits);
}

int	Fixed::getRawBits() const { return (_val); }

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

bool		Fixed::operator<(const Fixed &obj) { return (_val < obj._val); }

bool		Fixed::operator<=(const Fixed &obj) { return (_val <= obj._val); }

bool		Fixed::operator>(const Fixed &obj) { return (_val > obj._val); }

bool		Fixed::operator>=(const Fixed &obj) { return (_val >= obj._val); }

bool		Fixed::operator==(const Fixed &obj) { return (_val == obj._val); }

bool		Fixed::operator!=(const Fixed &obj) { return (_val != obj._val); }

int			Fixed::operator*(const Fixed &obj) { return (_val * obj._val); }

int			Fixed::operator/(const Fixed &obj) { return (_val / obj._val); }

int			Fixed::operator+(const Fixed &obj) { return (_val + obj._val); }

int			Fixed::operator-(const Fixed &obj) { return (_val - obj._val); }
