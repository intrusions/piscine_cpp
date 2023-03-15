/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:59:29 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/15 20:43:36 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

std::vector<int>	Span::get_data() { return _data; }

int main() {

	Span sp = Span(18);
	
	sp.addNumber(-4);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(12);
	
	std::vector<int> cpy = sp.get_data();
	for (std::vector<int>::iterator it = cpy.begin(); it != cpy.end(); it++)
			std::cout << *it << std::endl;
	
	std::cout << "---------------------" << std::endl << std::endl;
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;

	std::cout << "---------------------" << std::endl << std::endl;
	sp.addNumber(sp.get_data().begin(), sp.get_data().end());

	std::vector<int> cpy2 = sp.get_data();
	for (std::vector<int>::iterator it = cpy2.begin(); it != cpy2.end(); it++)
			std::cout << *it << std::endl;
	
	return 0;
}
