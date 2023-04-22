/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:25:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/16 17:18:04 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int 				_val;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &r);
		Fixed(const int n);
		Fixed(const float n);
		virtual ~Fixed();

		Fixed& 	operator=(const Fixed &r);

		/* comparison operator*/
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;
		
		/* mathematics operator*/
		Fixed	operator+(const Fixed &obj);
		Fixed	operator-(const Fixed &obj);
		Fixed	operator*(const Fixed &obj);
		Fixed	operator/(const Fixed &obj);

		/* pre/post incrementation/decrementation */
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		/* basic function */
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits() const;
		void 	setRawBits(int const raw);

		static Fixed	&min(Fixed &n1, Fixed &n2); 
		static Fixed	&max(Fixed &n1, Fixed &n2); 
		
		static const Fixed	&min(Fixed const &n1, Fixed const &n2); 
		static const Fixed	&max(Fixed const &n1, const Fixed &n2); 

};

std::ostream&	operator<<(std::ostream &os, const Fixed &obj);
