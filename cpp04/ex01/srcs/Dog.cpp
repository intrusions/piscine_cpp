/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:33 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 06:47:24 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
	, _brain(new Brain())
{
	std::cout << "++ dog default constructor" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal("Dog") {
	std::cout << "++ dog copy constructor" << std::endl;
	
	_brain = new Brain(*obj._brain);
}

Dog		&Dog::operator=(const Dog &obj) {
	std::cout << "++ dog asignement constructor" << std::endl;

	if (this != &obj) {
		delete _brain;
		_brain = new Brain(*obj._brain);
		_type = obj._type;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "-- dog default destructor" << std::endl;
	
	delete _brain;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
}
