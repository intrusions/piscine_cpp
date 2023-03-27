/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:52:16 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/27 20:47:56 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include <exception>
#include <algorithm>
#include <vector>

class Span {
	private:
		std::vector<int>	_data;
		uint32_t			_size;

	public:
		Span(uint32_t n);
		Span(Span const &obj);
		virtual ~Span();

		Span		operator=(Span const &rhs);
		void		addNumber(uint32_t n);
		void		addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		uint32_t	shortestSpan();
		uint32_t	longestSpan();

		class InvalidSpan : public std::exception {
			public :
				const char	*what() const throw();
		};

		std::vector<int>	getData();
};
