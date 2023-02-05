/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:04:18 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 22:51:11 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
    return ;
}

Weapon::Weapon() : type(""){
    return ;
}

Weapon::~Weapon() {
    return ;
}

const std::string &Weapon::getType() {
    return this->type;
}

void    Weapon::setType(std::string type) {
    this->type = type; 
}
