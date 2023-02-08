/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:00:11 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/08 06:02:53 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>

class HumanB {
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		HumanB(std::string name);
		virtual ~HumanB();
		
		void	attack() const;
		void	setWeapon(Weapon &weapon);
};