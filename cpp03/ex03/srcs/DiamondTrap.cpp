/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:01:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/15 04:41:13 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap()
	, FragTrap()
	, ScavTrap()
{
	std::cout << "++ DiamondTrap default constructor called" << std::endl;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = this->FragTrap::getHitPoints();
	_energyPoints = this->ScavTrap::getEnergyPoints();
	_attackDamage = this->FragTrap::getAttackDamage();
	return ;
}

DiamondTrap::~DiamondTrap() {
  	std::cout << "-- DiamondTrap default destructor called" << std::endl;
	return ;  
}

void    DiamondTrap::whoAmI() {
    std::cout   << "DiamondTrap : "
                << getName()
                << " sub object of "
                << ClapTrap::getName()
                << std::endl;
}