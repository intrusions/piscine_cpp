/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:04:18 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/18 22:13:42 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::Weapon() {
     this->type = "";
}

std::string &Weapon::getType() {
    return this->type;
}

void    Weapon::setType(std::string type) {
    this->type = type; 
}