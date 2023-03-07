/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:52:26 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 13:40:06 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	for (uint8_t i = 0; i < 4; i++)
		_spells[i] = NULL;
}

Character::Character(Character const &obj) : _name(obj._name) {
	for (uint8_t i = 0; i < 4; i++)
		delete _spells[i];

	for (uint8_t i = 0; i < 4; i++)
		if (obj._spells[i])
			_spells[i] = obj._spells[i]->clone();
}

Character::~Character() {
	for (uint8_t i = 0; i < 4; i++)
		delete _spells[i];
}

Character	&Character::operator=(Character const &rhs) {
	
	_name = rhs._name;
	
	if (this != &rhs) {
		for (uint8_t i = 0; i < 4; i++)
			delete _spells[i];

		for (uint8_t i = 0; i < 4; i++)
			if (rhs._spells[i])
				_spells[i] = rhs._spells[i]->clone();
	}
	return (*this);		
}

std::string	const	&Character::getName() const { return(_name); }

void	Character::equip(AMateria *m) {

	for (uint8_t i = 0; i < 4; i++) {
		if (!_spells[i]) {
			_spells[i] = m;
			std::cout << "spell added" << std::endl;
			return ;
		}
	}
	std::cout << "spell can't be added, inventory already full" << std::endl;
}

void	Character::unequip(int idx) {
	if (_spells[idx]) {
		_spells[idx] = NULL;
		std::cout << "spell dropped with success" << std::endl;
	} else {
		std::cout << "spell can't be dropped" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if ((idx < 0 || idx > 3) || !_spells[idx])
		std::cout << "spell does not exist" << std::endl;
	else
		_spells[idx]->use(target);
}
