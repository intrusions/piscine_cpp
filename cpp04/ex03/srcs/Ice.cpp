/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:10:46 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 13:41:56 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() { _type = "ice"; }

Ice::Ice(Ice const &obj) : AMateria() { _type = obj._type; }

Ice::~Ice() {}

Ice     &Ice::operator=(Ice const &rhs) {
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

Ice		*Ice::clone() const { return(new Ice()); }

void	Ice::use(ICharacter &target) {
	std::cout	<< "* shoots an ice bolt at "
				<< target.getName()
				<< " *"
				<< std::endl;
}
