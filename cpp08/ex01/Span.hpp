/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:52:16 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/12 05:06:15 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint>
#include <stdexception>
#include <algorithm>
#include <vector>

class Span {
	private:
		std::vector<int>	_data;
		uint32_t			_size;
		

	public:
		Span(uint32_t n);
		virtual ~Span();

		void		addNumber(uint32_t n);
		uint32_t	shortestSpan();
		uint32_t	longestSpan();

		class InvalidSpan : public std::exception {
			public :
			const char	*what() const throw();
		}
};