/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:10:46 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 13:41:42 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() { _type = "cure"; }

Cure::Cure(Cure const &obj) : AMateria() { _type = obj._type; }

Cure::~Cure() {}

Cure    &Cure::operator=(Cure const &rhs) {
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

Cure	*Cure::clone() const { return(new Cure()); }

void	Cure::use(ICharacter &target) {
	std::cout	<< "* heals "
				<< target.getName()
				<< "'s wounds *"
				<< std::endl;
}
