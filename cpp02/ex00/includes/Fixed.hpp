/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:25:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 05:59:01 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed {
	private:
		int 				_val;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed(Fixed &r);
		virtual ~Fixed();

		Fixed& 		operator=(Fixed &r);

		int			getRawBits() const;
		void 		setRawBits(int const raw);
};
