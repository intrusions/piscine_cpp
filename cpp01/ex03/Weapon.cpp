/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:04:18 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/17 23:22:42 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
    this->name = name;
}

std::string &Weapon::getType() {
    return this->type;
}

void    Weapon::setType(std::string type) {
    this->type = type;
}
