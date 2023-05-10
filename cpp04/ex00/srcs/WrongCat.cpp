/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:27 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 04:55:52 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "++ WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal() {
	std::cout << "++ WrongCat copy constructor" << std::endl;
	*this = obj;
}

WrongCat		&WrongCat::operator=(const WrongCat &obj) {
	std::cout << "++ WrongCat asignement constructor" << std::endl;
	
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "-- WrongCat default destructor" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat sound" << std::endl;
}
