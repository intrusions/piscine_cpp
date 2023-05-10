/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:22 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 04:53:50 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "++ WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type) {
	std::cout << "++ WrongAnimal constructor called by other class" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	std::cout << "++ WrongAnimal copy constructor" << std::endl;
	*this = obj;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj) {
	std::cout << "++ WrongAnimal asignement constructor" << std::endl;
	
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "-- WrongAnimal default destructor" << std::endl;
}

std::string	WrongAnimal::getType() const { return (_type); }

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}
