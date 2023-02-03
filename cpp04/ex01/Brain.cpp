/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:21:02 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/03 22:46:10 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "++ brain default constructor" << std::endl;
	return ;
}

Brain::Brain(const Brain &obj) {
	std::cout << "++ brain copy constructor" << std::endl;
	*this = obj;
	return ;
}

Brain	Brain::operator=(const Brain &obj) {
	std::cout << "++ brain asignement constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "-- brain destructor" << std::endl;
	return ;
}