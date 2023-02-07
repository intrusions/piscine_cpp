/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:27 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:02:31 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
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
	_type = obj._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "-- cat default destructor" << std::endl;
	return ;
}

void	Cat::makeSound() const {
	std::cout << "Miaou Miaou" << std::endl;
	return ;
}
