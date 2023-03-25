/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:59:29 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/25 23:44:59 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main() {
	try {
		Span span(10);

		span.addNumber(10);
		span.addNumber(5);
		span.addNumber(50);
		span.addNumber(30);
		span.addNumber(20);


		std::cout << "data in span : ";
		std::vector<int> data = span.get_data();
		for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;


		std::cout << "shortest : " << span.shortestSpan() << std::endl;
		std::cout << "longest : " << span.longestSpan() << std::endl;


		std::vector<int> v;
		for (int i = 1; i <= 10; ++i)
			v.push_back(i);
		span.addNumber(v.begin(), v.end()); 
		data = span.get_data();
		for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "exception : " << e.what() << std::endl;
	}
}
