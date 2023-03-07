/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 13:39:18 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	
	// learn materia
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmpSpell; 

	// creat and equip 4 Materia
	tmpSpell = src->createMateria("ice");
	me->equip(tmpSpell);
	tmpSpell = src->createMateria("cure");
	me->equip(tmpSpell);
	// save address of tmpSpell n2 "Cure" for free it
	AMateria *tmpSpell2 = tmpSpell;
	
	tmpSpell = src->createMateria("cure");
	me->equip(tmpSpell);
	tmpSpell = src->createMateria("ice");
	me->equip(tmpSpell);
	
	// 5 materia cant be added
	tmpSpell = src->createMateria("ice");
	me->equip(tmpSpell);
	delete tmpSpell;

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	//bad spell id
	me->use(5, *bob);

	// unequip tmpSpell n2
	me->unequip(1);
	// try to attack with spell was already dropped
	me->use(1, *bob);


	delete bob;
	delete me;
	delete src;
	delete tmpSpell2;
	return 0;
}
