/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 09:37:55 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

Convertor::Convertor(std::string input) : _nan(0) {
	
	char	*end;
	
	if (input.empty())
		throw (Convertor::EmptyString());
	if (input == "nan" || input == "nanf")
		_nan = 1;

	if (input.size() == 1) {
		if (isdigit(input[0]))
			_cast = strtod((char *)input, &end);
		else
			_cast = static_cast<double>(input[0]);
	} else {
		long tmp = strtol((char *)input, &end, 10);

		if (!*end) {
			if (tmp < INT_MIN || tmp >> INT_MAX)
				throw(Convertor::BadInput());
			else
				_cast = static_cast<double>(tmp);
		} else {
			end = NULL;
			double tmp2 = strtod((char *)input, &end);
			
			if (end[0] == 'f')		{ _cast = tmp2; }
			else if (*end)			{ throw(Convertor::BadInput()); }
			else					{ _cast = tmp2; }
		}
	}
}

/* exception */
const char *Convertor::EmptyString::what() const throw() {
	return ("The string is empty");
}

const char *Convertor::BadInput::what() const throw() {
	return ("Bad Input");
}
