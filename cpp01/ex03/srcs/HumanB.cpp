/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:14:08 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/08 07:38:29 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _weapon(NULL)
	, _name(name)
{
	return ;
}

HumanB::~HumanB() {}

void    HumanB::attack() const {
	if (_weapon) {
		std::cout   << _name << " attacks with their "
					<< _weapon->getType()
					<< std::endl;
		
	} else {
		std::cout   << _name
					<< " has no weapon "
					<< std::endl; 
	}
	return ;
}

void    HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }
