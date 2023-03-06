/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:52:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 10:44:52 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(_name) {
	for (uint8_t i = 0; i < 4; i++)
		spells[i] = NULL;
}

Character::Character(Character const &obj) : _name(obj._name) {
	for (uint8_t i = 0; i < 4; i++)
		delete _spells[i];

	for (uint8_t i; i < 4; i++)
		if (obj._spells[i])
			spells[i] = obj._spells[i].clone();
}

Character::~Character() {
	for (uint8_t i; i < 4; i++)
		delete _spells[i];
}

Character	&Character::operator=(Character const &rhs) : _name(rhs._name) {
	if (this != &rhs) {
		for (uint8_t i = 0; i < 4; i++)
			delete _spells[i];

		for (uint8_t i; i < 4; i++)
			if (obj._spells[i])
				spells[i] = obj._spells[i].clone();
	}
	return (*this);		
}

std::string	const	&Character::getName() const { return(_name) }

void	Character::equip(AMateria *m) {
	
	uint8_t i = 0
	while (_spells[i] && i < 4)
		i++;

	if (i < 4) {
		_spells[i] = m;
		std::cout << "Spell added" << std::endl;
	} else {
		std::cout << "Spell can't be added, invotary already full" << std::endl;
	}
}

void	Character::unequip(int idx) {
	if (_spells[idx]) {
		delete _spells[idx];
		std::cout << "spell dropped with success" << std::endl;
	} else {
		std::cout << "spell can't be dropped" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target) {
	_spells[idx].use(target);
}
