/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:22 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 08:47:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "++ animal default constructor" << std::endl;
}

AAnimal::AAnimal(const std::string type) : _type(type) {
	std::cout << "++ animal constructor called by other classe" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj) {
	std::cout << "++ animal copy constructor" << std::endl;
	*this = obj;
}

AAnimal	&AAnimal::operator=(const AAnimal &obj) {
	std::cout << "++ animal asignement constructor" << std::endl;

	if (this != &obj)
		_type = obj._type;
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "-- animal default destructor" << std::endl;
}

std::string	AAnimal::getType() const { return (_type); }
