/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:53:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/19 15:58:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(uint32_t n) : _size(n) {}

Span::Span(Span const &obj)
	: _data(obj._data)
	, _size(obj._size) {}

Span::~Span() {}

Span	Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		_data = rhs._data;
		_size = rhs._size;
	}
	return (*this);
}

void	Span::addNumber(uint32_t n) {
	if (_data.size() == _size)
		throw std::out_of_range("span is full");
	_data.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (std::distance(begin, end) > int(_size - _data.size()))
		throw InvalidSpan();
	_data.insert(_data.end(), begin, end);
}

uint32_t	Span::shortestSpan() {
	if (_data.size() <= 1)
		throw (Span::InvalidSpan());

	std::vector<int> sorted_data = _data;
	std::sort(sorted_data.begin(), sorted_data.end());
	int	shortest = sorted_data[1] - sorted_data[0];
	
	for (uint64_t i = 2; i < _data.size(); i++) {
		if ((sorted_data[i] - sorted_data[i - 1]) < shortest)	
			shortest = sorted_data[i] - sorted_data[i - 1];
	}
	return (shortest);
}

uint32_t	Span::longestSpan() {
	int min;
	int max;
	
	if (_data.size() <= 1)
		throw InvalidSpan();

	for (uint64_t i = 0; i < _data.size(); i++) {
		if (i == 0) {
			min = _data[i];
			max = _data[i];
		}
		if (_data[i] < min)
			min = _data[i];
		if (_data[i] > max)
			max = _data[i];
	}
	return (max - min);
}

const char			*Span::InvalidSpan::what() const throw() { return ("out of range"); }

std::vector<int>	Span::getData() { return _data; }
