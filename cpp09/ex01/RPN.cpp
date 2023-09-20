/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:11:29 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/20 19:04:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

void	RPN::calcul() {}

/* `debug` */
void print_stack(std::stack<int> s)
{
	if (s.empty())
		return;
 
	int x = s.top();
	s.pop();
	std::cout << x << ' ';
	print_stack(s);
	s.push(x);
}

/* check if `c` is an arythmetic operator or a digit */
bool    RPN::char_is_valid(char c) {

	return ((c == '+' || c == '-' || c == '/' || c == '*')
		|| (isdigit(c))
	);
}

/* check if string are composed by arythmetic operator or digit, separate by space */
bool    RPN::input_is_valid(std::string str) {
	
	for (uint8_t i = 0; str[i]; i++) {

		if (!(i % 2)) {
			if (!char_is_valid(str[i]))
				return (0);
		} else if (str[i] != ' ')
			return (0);
	}
	return (1);
}

/* fill our `std::stack _n`, with our char */
void	RPN::fill_stack(std::string str) {

	for (int8_t i = str.length() - 1; i >= 0; i -= 2) {
		isdigit(str[i]) ? _n.push(str[i] - 48) : _n.push(str[i]);
	}
	print_stack(_n);
}
