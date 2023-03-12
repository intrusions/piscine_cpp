/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:25:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/12 00:57:08 by jucheval         ###   ########.fr       */
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
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits() const;
		void 	setRawBits(int const raw);

		bool	operator>(const Fixed &obj);
		bool	operator<(const Fixed &obj);
		bool	operator>=(const Fixed &obj);
		bool	operator<=(const Fixed &obj);
		bool	operator==(const Fixed &obj);
		bool	operator!=(const Fixed &obj);
		
		Fixed	operator+(const Fixed &obj);
		Fixed	operator-(const Fixed &obj);
		Fixed	operator*(const Fixed &obj);
		Fixed	operator/(const Fixed &obj);

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);


		static Fixed	&min(Fixed &n1, Fixed &n2); 
		static Fixed	&max(Fixed &n1, Fixed &n2); 
		
		static const Fixed	&min(Fixed const &n1, Fixed const &n2); 
		static const Fixed	&max(Fixed const &n1, const Fixed &n2); 

};

std::ostream&	operator<<(std::ostream &os, const Fixed &obj);
