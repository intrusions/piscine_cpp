/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/10 06:44:16 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::_c = 0;
int		ScalarConverter::_i = 0;
float	ScalarConverter::_f = 0.0;
double	ScalarConverter::_d = 0.0;

bool	ScalarConverter::_nan = false;
bool	ScalarConverter::_posInf = false;
bool	ScalarConverter::_negInf = false;

double	ScalarConverter::_cast = 0.0;

ScalarConverter::ScalarConverter(std::string input) {
	if (input.empty()) {	
		throw (ScalarConverter::EmptyString());
	} else if (input == "nanf") {
		_f = std::numeric_limits<float>::quiet_NaN();
		_nan = true;
	} else if (input == "nan") {
		_d = std::numeric_limits<double>::quiet_NaN();
		_nan = true;
	} else if (input == "+inf") {
		_d = std::numeric_limits<double>::infinity();
		_posInf = true;
	} else if (input == "-inf") {
		_d = -std::numeric_limits<double>::infinity();
		_negInf = true;
	} else if (input == "+inff") {
		_f = std::numeric_limits<float>::infinity();
		_posInf = true;
	} else if (input == "-inff") {
		_f = -std::numeric_limits<float>::infinity();
		_negInf = true;
	} else {
		findOriginalType(input);
	}
}

void	ScalarConverter::findOriginalType(std::string input) {
	_cast = strtod(input.c_str(), NULL);

	if (isChar(input)) {
		_c = input[0];
		_cast = static_cast<double>(input[0]);
	}
	else if ((_cast > INT_MIN && _cast < INT_MAX) && isInt(input))
		_i = atoi(input.c_str());
	else if ((_cast > -FLT_MAX && _cast < FLT_MAX) && isFloat(input))
		_f = atof(input.c_str());
	else if ((_cast > -DBL_MAX && _cast < DBL_MAX) && isDouble(input))
		_d = strtod(input.c_str(), NULL);
	else
		throw(ScalarConverter::BadInput());
}

void ScalarConverter::convert() {
	try {
		std::cout	<< "char: "
					<< toChar()
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}

	try {
		std::cout	<< "int: "
					<< toInt()
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}

	try {
		std::cout	<< "float: "
					<< std::fixed << std::setprecision(1)
					<< toFloat() << "f"
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}

	try {
		std::cout	<< "double: "
					<< toDouble()
					<< std::endl;
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
} 

bool	ScalarConverter::isChar(std::string input) {
	return (input.size() == 1 && !isdigit(input[0]));
}

bool	ScalarConverter::isInt(std::string input) {
	int i = 0;

	if (input[0] == '-' || input[0] == '+')
		i++;
	
	while (input[i]) {
		if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

bool ScalarConverter::isFloat(const std::string input) {
	int		i = 0;
	bool	hasDecimal = false;

	if (input[0] == '-' || input[0] == '+')
		i++;

	while (input[i]) {
		if (!isdigit(input[i])) {
			if (input[i] == '.') {
				if (hasDecimal)
					return (false);
				hasDecimal = true;
			} else if (input[i] == 'f') {
				return (true);
			} else {
				return (false);
			}
		}
		i++;
	}
	return (false);
}

bool ScalarConverter::isDouble(const std::string input) {
	int		i = 0;
	bool	hasDecimal = false;

	if (input[0] == '-' || input[0] == '+')
		i++;

	while (input[i]) {
		if (!isdigit(input[i])) {
			if (input[i] == '.') {
				if (hasDecimal)
					return (false);
				hasDecimal = true;
			} else {
				return (false);
			}
		}
		i++;
	}
	return (true);
}

char	ScalarConverter::toChar() {
	if (_cast < 0 || _cast > CHAR_MAX || _nan || _posInf || _negInf)
			throw(ScalarConverter::Impossible());
	if (_cast < 32 || _cast > 126)
			throw(ScalarConverter::NonDisplayable());
	else if (_i)
		return (static_cast<char>(_i));
	else if (_f)
		return (static_cast<char>(_f));
	else if (_d)
		return (static_cast<char>(_d));
	return (_c);
}

int	ScalarConverter::toInt() {
	if (_cast < INT_MIN || _cast > INT_MAX || _nan || _posInf || _negInf)
		throw(ScalarConverter::Impossible());
	else if (_c)
		return (static_cast<int>(_c));
	else if (_f)
		return (static_cast<int>(_f));
	else if (_d)
		return (static_cast<int>(_d));
	return (_i);
}


float	ScalarConverter::toFloat() {
	if (_cast < -FLT_MAX || _cast > FLT_MAX)
		throw(ScalarConverter::Impossible());
	if (_c)
		return (static_cast<float>(_c));
	else if (_i)
		return (static_cast<float>(_i));
	else if (_d)
		return (static_cast<float>(_d));
	return (_f);
}

double	ScalarConverter::toDouble() {
	if (_cast < -DBL_MAX || _cast > DBL_MAX)
		throw(ScalarConverter::Impossible());
	else if (_c)
		return (static_cast<double>(_c));
	else if (_i)
		return (static_cast<double>(_i));
	else if (_f)
		return (static_cast<double>(_f));
	return (_d);
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