/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:53:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/12 05:31:35 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(uint32_t n) : _size(n) {}

Span::~Span() {}

void    Span::addNumber(uint32_t n) {
	if (_data.size >= _size)
		throw std::out_of_range("span is full");
	_data.push_back(n);
}

uint32_t    Span::shortestSpan() {
	if (_data.empty() || _data.size() == 1)
		throw (Span::InvalidSpan());

	for (uint32_t i = 0; i < _data.size; i++) {
		
	}
}

uint32_t    Span::longestSpan() {
	int min;
	int max;
	
	if (_data.empty() || _data.size() == 1)
		throw (Span::InvalidSpan());
	
	for (uint32_t i = 0; i < _data.size; i++) {
		if (i == 0) {
			min = data[i];
			max = data[i];
		}
		if (_data[i] < min)
			min = data[i];
		if (_data[i] > max)
			max = data[i];
	}
	return (max - min);
}