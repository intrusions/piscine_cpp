/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:25:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/01 20:28:34 by jucheval         ###   ########.fr       */
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
};

std::ostream&	operator<<(std::ostream &os, const Fixed &obj);
