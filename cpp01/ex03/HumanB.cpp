/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:14:08 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/17 23:26:35 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

void    HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;

}

void    HumanB::setWeapon(Weapon weapon) {
    this->weapon = weapon;
}
