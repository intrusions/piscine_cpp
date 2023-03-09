/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:05:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 10:12:48 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

Convertor::Convertor(std::string input) : _nan(0) {

}

/* exception */
const char *Convertor::EmptyString::what() const throw() {
	return ("The string is empty");
}

const char *Convertor::BadInput::what() const throw() {
	return ("Bad Input");
}
