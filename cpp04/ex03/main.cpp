/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/06 22:12:03 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	
	/* Cree une materiaSource et apprend Ice et Cure */
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	/* Cree un personnage */
	ICharacter *carl = new Character("Carl");

	/* Cree des Materia Ice et Cure, et les equipe au personnage */
	AMateria *to_free = src->createMateria("ice");
	carl->equip(to_free);
	carl->equip(src->createMateria("ice"));
	carl->equip(src->createMateria("cure"));
	carl->equip(src->createMateria("cure"));
	
	/* Une cinquieme materia ne peut etre equiper */
	AMateria *ice = src->createMateria("ice");
	carl->equip(ice);
	delete ice;

	/* utilise les 4 spell de "Carl" sur "bob" */
	ICharacter* bob = new Character("bob");
	carl->use(0, *bob);
	carl->use(1, *bob);
	carl->use(2, *bob);
	carl->use(3, *bob);

	/* Utilisation d'un spell pas present dans l'inventaire du personnage */
	carl->use(5, *bob);

	/* Drop un spell au sol */
	carl->unequip(0);
	
	/* tente d'utiliser un spell inexistant */
	carl->use(0, *bob);

	delete to_free;
	delete bob;
	delete carl;
	delete src;
}
