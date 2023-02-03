/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:27 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/03 22:55:08 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()) {
	std::cout << "++ cat default constructor" << std::endl;
	return ;
}

Cat::Cat(const Cat &obj) {
	std::cout << "++ cat copy constructor" << std::endl;
	*this = obj;
	return ;
}

Cat		&Cat::operator=(const Cat &obj) {
	std::cout << "++ cat asignement constructor" << std::endl;
	this->type = obj.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "-- cat default destructor" << std::endl;
	delete this->brain;
	return ;
}

void	Cat::makeSound() const {
	std::cout << "Miaou Miaou" << std::endl;
	return ;
}
