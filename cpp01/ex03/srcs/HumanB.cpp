/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:14:08 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 08:30:39 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name) {
    return ;
}

HumanB::HumanB(std::string name, Weapon *weapon) : weapon(weapon), name(name) {
    return ;
}

HumanB::~HumanB() {
    return ;
}

void    HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
