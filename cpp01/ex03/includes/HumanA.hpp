/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:57:33 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:18:18 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		Weapon      &_weapon;
		std::string _name;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		virtual	~HumanA();
		void	attack();

};
