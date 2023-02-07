/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:04:18 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:21:41 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	return ;
}

Weapon::Weapon() : _type(""){
	return ;
}

Weapon::~Weapon() {
	return ;
}

const std::string &Weapon::getType() {
	return (_type);
}

void	Weapon::setType(std::string type) {
	_type = type; 
}
