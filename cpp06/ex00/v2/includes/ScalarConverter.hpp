/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/10 06:08:07 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <limits>
#include <climits>
#include <float.h>
#include <cstdlib>
#include <iomanip>

class ScalarConverter {
	private:
		static char		_c;
		static int		_i;
		static float	_f;
		static double	_d;

		static bool		_nan;
		static bool		_posInf;
		static bool		_negInf;

		static double	_cast;

	public:
		ScalarConverter(std::string input);

	static void	findOriginalType(std::string input);

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

	static bool		isChar(std::string input);
	static bool		isInt(std::string input);
	static bool		isFloat(std::string input);
	static bool		isDouble(std::string input);

	static char		toChar();
	static int		toInt();
	static float	toFloat();
	static double	toDouble();
	
	static void		convert();
};
