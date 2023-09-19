/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:59:29 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/19 16:10:00 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	try {
		Span span(1010);

		for (uint16_t i = 0; i < 1000; i++)
			span.addNumber(i);

		std::cout << "data in span : ";
		std::vector<int> data = span.getData();
		for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

		std::cout << "shortest : " << span.shortestSpan() << std::endl;
		std::cout << "longest : " << span.longestSpan() << std::endl;


		std::vector<int> v;
		for (uint8_t i = 0; i < 10; ++i)
			v.push_back(i);
		span.addNumber(v.begin(), v.end()); 
		data = span.getData();
		for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
