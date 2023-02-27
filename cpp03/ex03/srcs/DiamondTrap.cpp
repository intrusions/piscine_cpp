/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:01:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 09:46:15 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name", 100, 50, 30)
	, FragTrap()
	, ScavTrap()
	, _name(name) 
{
	std::cout << "++ DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj) 
	: ClapTrap()
	, FragTrap()
	, ScavTrap()
{
	std::cout << "++ DiamondTrap copy constructor called" << std::endl;
	
	_name = obj.DiamondTrap::getName();
	setName(obj.ClapTrap::getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}


DiamondTrap	DiamondTrap::operator=(DiamondTrap const &obj) {
	std::cout << "++ DiamondTrap asignement constructor called" << std::endl;

	if (this != &obj) {
		_name = obj.DiamondTrap::getName();
		setName(obj.ClapTrap::getName());
		setHitPoints(obj.getHitPoints());
		setEnergyPoints(obj.getEnergyPoints());
		setAttackDamage(obj.getAttackDamage());
	}
	return (*this);
}


DiamondTrap::~DiamondTrap() {
  	std::cout << "-- DiamondTrap destructor called" << std::endl;
}


void    DiamondTrap::whoAmI() {
    std::cout   << "DiamondTrap : "
                << DiamondTrap::getName()
                << " sub object of "
                << ClapTrap::getName()
                << std::endl;
}

std::string	DiamondTrap::getName(void) const { return (_name); }