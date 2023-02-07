/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:06:39 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:22:42 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name) {
	return ;
}

HumanA::~HumanA() {
	return ;
}

void    HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
