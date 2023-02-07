/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:00:11 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:19:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon *Weapon);
		virtual ~HumanB();
		
		void	attack();
		void	setWeapon(Weapon &weapon);
};