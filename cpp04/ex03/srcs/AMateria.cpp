/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:19:44 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 11:28:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &obj) : _type(obj._type) {}

AMateria::~AMateria() {}

AMateria    &AMateria::operator=(AMateria const &rhs) {
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string const	&AMateria::getType() const { return (_type); }

void	AMateria::use(ICharacter &target) {
	std::cout << "\"*nothing happen to " << target.getName() << "*\"" << std::endl;
}

