/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:50:46 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/06 21:17:19 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

/* La classe Character herite de l'interface ICharater,
elle possede un name et un tableau de 4 AMateria pouvant contenirs des instance
de Ice et cure.
la fonction equip() ajoute un spell au tableau si une place est disponible.
la fonction unequip() supprime le spell ayant l'index passer en parametre dans le tableau.
la fonction use() affiche le message attendu en fonction de l'index passer en parametre */

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria    *_spells[4];
		
	public:
		Character(std::string name);
		Character(Character const &obj);
		virtual ~Character();

		Character   &operator=(Character const &obj);

        virtual std::string const	&getName() const;
		virtual void 				equip(AMateria *m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter &target);

};