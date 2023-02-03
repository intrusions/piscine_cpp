/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:33 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/03 22:55:27 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
	std::cout << "++ dog default constructor" << std::endl;
	return ;
}

Dog::Dog(const Dog &obj) {
	std::cout << "++ dog copy constructor" << std::endl;
	*this = obj;
	return ;
}

Dog		&Dog::operator=(const Dog &obj) {
	std::cout << "++ dog asignement constructor" << std::endl;
	this->type = obj.type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "-- dog default destructor" << std::endl;
	delete this->brain;
	return ;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
	return ;
}
