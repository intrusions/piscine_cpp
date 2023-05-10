/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:21:02 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 09:11:37 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "++ brain default constructor" << std::endl;
}

Brain::Brain(const Brain &obj) {
	std::cout << "++ brain copy constructor" << std::endl;
    
	for (int i = 0; i < 100; i++)
        _ideas[i] = obj._ideas[i];
}

Brain	&Brain::operator=(const Brain &obj) {
	std::cout << "++ brain asignement constructor" << std::endl;
	
	if (this != &obj) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "-- brain destructor" << std::endl;
}

std::string	Brain::getIdeas(uint8_t idx) const { return (_ideas[idx]); }

void		Brain::setIdeas(uint8_t idx, std::string ideas) { _ideas[idx] = ideas; }
