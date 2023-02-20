/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:06:39 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/20 17:16:56 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &weapon)
	: _weapon(weapon)
	, _name(name) {}

HumanA::~HumanA() {}

void    HumanA::attack() const{
	std::cout	<< _name << " attacks with their "
				<< _weapon.getType()
				<< std::endl;
	return ;
}
