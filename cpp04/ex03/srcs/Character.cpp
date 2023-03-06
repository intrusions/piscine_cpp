/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:52:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 10:24:10 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(_name) {
	for (uint8_t i; i < 4; i++)
		spells[i] = NULL;
}

Character::Character(Character const &obj) : _name(obj._name) {
	for (uint8_t i; i < 4; i++)
		delete _spells[i];

	for (uint8_t i; i < 4; i++) {
		if (obj._spells[i])
			spells[i] = obj._spells[i];
		else
			_spells[i] = NULL;
	}
}

Character::~Character() {
	for (uint8_t i; i < 4; i++)
		delete _spells[i];
}

Character	&Character::operator=(Character const &rhs) : _name(rhs._name) {
	if (this != &rhs) {
		for (uint8_t i; i < 4; i++)
			delete _spells[i];

		for (uint8_t i; i < 4; i++) {
			if (obj._spells[i])
				spells[i] = obj._spells[i];
			else
				_spells[i] = NULL;
		}
	}
	return (*this);		
}

