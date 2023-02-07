/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:14:08 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:21:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name) {
    return ;
}

HumanB::HumanB(std::string name, Weapon *weapon) : _weapon(weapon), _name(name) {
    return ;
}

HumanB::~HumanB() {
    return ;
}

void    HumanB::attack() {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}
