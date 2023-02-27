/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:27 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 10:10:06 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"

Cat::Cat()
	: AAnimal("Cat"), 
	_brain(new Brain())
{
	std::cout << "++ cat default constructor" << std::endl;
}

Cat::Cat(const Cat &obj) : AAnimal() {
	std::cout << "++ cat copy constructor" << std::endl;
	*this = obj;
}

Cat		&Cat::operator=(const Cat &obj) {
	std::cout << "++ cat asignement constructor" << std::endl;
	
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "-- cat default destructor" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const {
	std::cout << "Miaou Miaou" << std::endl;
}
