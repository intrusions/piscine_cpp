/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/10 19:51:44 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

Convertor::Convertor(std::string input) : _nan(0) {
	if (input.empty())
		throw (Convertor::EmptyString());
	if (input == "nan" || input == "nanf")
		_nan = 1;
	if (input.size() == 1 && !isdigit(input[0])) {
		_cast = static_cast<char>(input[0]);
		return ;
	}
	_cast = atof(input.c_str());
}

char	Convertor::toChar() const {
	if (_cast < CHAR_MIN || _cast > CHAR_MAX || _nan)
		throw(Convertor::Impossible());
	if (_cast < 32 || _cast > 126)
		throw(Convertor::NonDisplayable());
	return (static_cast<char>(_cast));
}

int	Convertor::toInt() const {
	if (_cast < INT_MIN || _cast > INT_MAX || _nan)
		throw(Convertor::Impossible());
	return (static_cast<int>(_cast));
}

float	Convertor::toFloat() const {
	if (_cast < FLT_MIN || _cast > FLT_MAX)
		throw(Convertor::Impossible());	
	return (static_cast<float>(_cast));
}

double	Convertor::toDouble() const {
	if (_cast < DBL_MIN || _cast > DBL_MAX)
		throw(Convertor::Impossible());
	return (_cast);
}

double	Convertor::getCast() const { return (_cast); }

std::ostream	&operator<<(std::ostream &os, const Convertor &obj) {
	
	try {
		std::cout	<< "char: "
					<< obj.toChar()
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}

	try {
		std::cout	<< "int: "
					<< obj.toInt()
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}

	try {
		std::cout	<< "float: "
					<< std::fixed << std::setprecision(1)
					<< obj.toFloat() << "f"
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}

	try {
		std::cout	<< "double: "
					<< std::fixed << std::setprecision(1)
					<< obj.toDouble()
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
	return (os);
}

/* exception */
const char *Convertor::EmptyString::what() const throw() {
	return ("The string is empty");
}

const char *Convertor::BadInput::what() const throw() {
	return ("Bad Input");
}

const char *Convertor::Impossible::what() const throw() {
	return ("Impossible");
}

const char *Convertor::NonDisplayable::what() const throw() {
	return ("Non displayable");
}