/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:25:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/28 00:09:36 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {
	private:
		int 				val;
		static const int	bits = 8;
	
	public:
		Fixed();
		Fixed(Fixed &r);
		~Fixed();

		Fixed& 		operator=(Fixed &r);
		int			getRawBits() const;
		void 		setRawBits(int const raw);
};
