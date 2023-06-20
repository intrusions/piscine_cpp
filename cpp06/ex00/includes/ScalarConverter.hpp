/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/06/20 16:59:38 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <climits>
#include <float.h>
#include <cstdlib>
#include <iomanip>

class ScalarConverter {
	private:
		double	_cast;
		bool	_nan;

	public:
		ScalarConverter(std::string input);

	class EmptyString : public std::exception {
		virtual const char *what() const throw();
	};

	class BadInput : public std::exception {
		virtual const char *what() const throw();
	};

	class Impossible : public std::exception {
		virtual const char *what() const throw();
	};

	class NonDisplayable : public std::exception {
		virtual const char *what() const throw();
	};

	char	toChar() const;
	int		toInt() const;
	float	toFloat() const;
	double	toDouble() const;
	
	double	getCast() const;

	void	convert(std::string str);

};

std::ostream	&operator<<(std::ostream &os, const ScalarConverter &obj);
