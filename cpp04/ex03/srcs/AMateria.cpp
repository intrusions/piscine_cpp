/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:19:44 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/06 20:40:22 by jucheval         ###   ########.fr       */
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
	std::cout << "* nothing happen to " << target.getName() << " *" << std::endl;
}
