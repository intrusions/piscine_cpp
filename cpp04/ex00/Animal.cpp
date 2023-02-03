/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:22 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/03 04:26:58 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "++ animal default constructor" << std::endl;
	return ;
}

Animal::Animal(const std::string _type) : type(_type) {
	std::cout << "++ animal constructor called by other classe" << std::endl;
	return ;
}

Animal::Animal(const Animal &obj) {
	std::cout << "++ animal copy constructor" << std::endl;
	*this = obj;
	return ;
}

Animal	&Animal::operator=(const Animal &obj) {
	std::cout << "++ animal asignement constructor" << std::endl;
	this->type = obj.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "-- animal default destructor" << std::endl;
	return ;
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
	return ;
}
