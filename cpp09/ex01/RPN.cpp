/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:11:29 by jucheval          #+#    #+#             */
/*   Updated: 2023/11/03 22:50:46 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &cpy) { _stack = cpy._stack; }

RPN::~RPN() {}

RPN		&RPN::operator=(const RPN &rhs) {
	if (this != &rhs) {
		_stack = rhs._stack;
	}
	return (*this);
}


bool	RPN::_is_valid_char(char c) {
	return (
		(c == ' ')
		|| (c == '+' || c == '-' || c == '/' || c == '*')
		|| (c >= '0' && c <= '9')
	);
}

bool	RPN::_is_operator(char c) {
	return (
		c == '+' || c == '-' || c == '/' || c == '*'
	);
}

void	RPN::_stack_operation(char sign) {

	int32_t	n1, n2;

	if (_stack.size() < 2)
		throw std::invalid_argument("invalid logic");
	
	n1 = _stack.top();
	_stack.pop();
	n2 = _stack.top();
	_stack.pop();


	switch (sign) {
		case '+':
			_stack.push(n2 + n1);
			break;
		case '-':
			_stack.push(n2 - n1);
			break;
		case '/':
			_stack.push(n2 / n1);
			break;
		case '*':
			_stack.push(n2 * n1);
			break;
	}
}

void	RPN::calcul(const std::string &input) {
	
	if (input.empty())
		throw std::invalid_argument("empty string");

	for (uint16_t i = 0; input[i]; i++) {
		if (!_is_valid_char(input[i])) {
			throw std::invalid_argument("invalid character in string");
		}
	}

	for (uint16_t i = 0; input[i]; i++) {
		if 			(input[i] == ' ')			{ continue; }
		else if		(_is_operator(input[i]))	{ _stack_operation(input[i]); }
		else									{ _stack.push(input[i] - 48); }
	}

	if (_stack.size() != 1)
		throw std::invalid_argument("invalid logic");
	std::cout << _stack.top() << std::endl;
}