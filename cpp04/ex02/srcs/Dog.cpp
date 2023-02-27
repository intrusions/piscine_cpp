/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:33 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 10:10:39 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"

Dog::Dog()
	: AAnimal("Dog")
	, _brain(new Brain())
{
	std::cout << "++ dog default constructor" << std::endl;
}

Dog::Dog(const Dog &obj) : AAnimal() {
	std::cout << "++ dog copy constructor" << std::endl;
	*this = obj;
}

Dog		&Dog::operator=(const Dog &obj) {
	std::cout << "++ dog asignement constructor" << std::endl;
	
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "-- dog default destructor" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
}
