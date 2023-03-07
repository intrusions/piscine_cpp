/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:51:44 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 11:36:11 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (uint8_t i = 0; i < 4; i++)
		_spellsLearned[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj) { *this = obj; }

MateriaSource::~MateriaSource() {
	for (uint8_t i = 0; i < 4; i++)
		delete _spellsLearned[i];
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &rhs) { 
	for (uint8_t i = 0; i < 4; i++) {
		delete _spellsLearned[i];
		_spellsLearned[i] = NULL;
	}

	for (uint8_t i = 0; i < 4; i++) {
		if (rhs._spellsLearned[i])
			_spellsLearned[i] = rhs._spellsLearned[i]->clone();
	}
	return (*this);
}

void    MateriaSource::learnMateria(AMateria *m) {
	
	for (uint8_t i = 0; i < 4; i++) {
		if (!_spellsLearned[i]) {
			_spellsLearned[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	
	for (uint8_t i = 0; i < 4; i++) {
		if (_spellsLearned[i] && _spellsLearned[i]->getType() == type)
			return (_spellsLearned[i]->clone());
	}
	return (0);
}
