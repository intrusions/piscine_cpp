/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 10:12:28 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <climits>

class Convertor {
	private:
		double	_cast;
		bool	_nan;

	public:
		Convertor(std::string input);

	class EmptyString : public std::exception {
		virtual const char *what() const throw();
	};

	class BadInput : public std::exception {
		virtual const char *what() const throw();
	};
};
