/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:25:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/31 11:02:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Fixed {
	private:
		int 				val;
		static const int	bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &r);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();

		float			toFloat(void) const;
		int				toInt(void) const;
		int				getRawBits() const;
		void 			setRawBits(int const raw);

		Fixed& 		operator=(const Fixed &r);
		bool		operator<(const Fixed &obj);
		bool		operator<=(const Fixed &obj);
		bool		operator>(const Fixed &obj);
		bool		operator>=(const Fixed &obj);
		bool		operator==(const Fixed &obj);
		bool		operator!=(const Fixed &obj);
		
		int			operator*(const Fixed &obj);
		int			operator/(const Fixed &obj);
		int			operator+(const Fixed &obj);
		int			operator-(const Fixed &obj);
};

std::ostream&	operator<<(std::ostream &os, const Fixed &obj);