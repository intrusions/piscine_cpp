/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/06/20 18:51:20 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ScalarConverter::_nan = false;
double ScalarConverter::_cast = 0.0f;

ScalarConverter::ScalarConverter(std::string input) {
	if (input.empty())
		throw (ScalarConverter::EmptyString());
	else if (input == "nan" || input == "nanf") 
		_nan = 1;
	else if (input.size() == 1 && !isdigit(input[0])) {
		_cast = static_cast<char>(input[0]);
		return ;
	}
	_cast = atof(input.c_str());
}

char	ScalarConverter::toChar() {
	if (_cast < CHAR_MIN || _cast > CHAR_MAX || _nan)
		throw(ScalarConverter::Impossible());
	if (_cast < 32 || _cast > 126)
		throw(ScalarConverter::NonDisplayable());
	return (static_cast<char>(_cast));
}

int	ScalarConverter::toInt() {
	if (_cast < INT_MIN || _cast > INT_MAX || _nan)
		throw(ScalarConverter::Impossible());
	return (static_cast<int>(_cast));
}

float	ScalarConverter::toFloat() {
	if (_cast < 0 || _cast > FLT_MAX)
		throw(ScalarConverter::Impossible());
	return (static_cast<float>(_cast));
}

double	ScalarConverter::toDouble() {
	if (_cast < 0 || _cast > DBL_MAX)
		throw(ScalarConverter::Impossible());
	return (_cast);
}

double	ScalarConverter::getCast() { return (_cast); }

std::ostream	&operator<<(std::ostream &os, const ScalarConverter &obj) {
	
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
const char *ScalarConverter::EmptyString::what() const throw() {
	return ("The string is empty");
}

const char *ScalarConverter::BadInput::what() const throw() {
	return ("Bad Input");
}

const char *ScalarConverter::Impossible::what() const throw() {
	return ("Impossible");
}

const char *ScalarConverter::NonDisplayable::what() const throw() {
	return ("Non displayable");
}