/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:50:46 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 13:09:21 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

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