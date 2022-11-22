/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:25:40 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/22 21:36:32 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed {
	private:
		int 				val;
		static const int	bits;
	
	public:
		Fixed();
		Fixed(Fixed &r);
		~Fixed();
		Fixed 		operator=(Fixed &r);
		int			getRawBits() const;
		int 		getVal();
		// void 		setRawBits(int const raw);
};

