/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:01:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 07:08:10 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(
		name + "_clap_name"
		, _hitPoints(100)
		, _energyPoints(50)
		, _attackDamage(30)
	)
	, FragTrap(name)
	, ScavTrap(name)
	, _name(name)
{
	std::cout << "++ DiamondTrap default constructor called" << std::endl;
	return ;
}

// DiamondTrap::DiamondTrap(std::string name) 
// 	: FragTrap(name)
// 	, ScavTrap(name)
// 	, ClapTrap(name)
// {
// 	std::cout << "++ DiamondTrap default constructor called" << std::endl;
// 	_name = name;
// 	ClapTrap::_name = name + "_clap_name";
// 	_hitPoints = this->FragTrap::getHitPoints();
// 	_energyPoints = this->ScavTrap::getEnergyPoints();
// 	_attackDamage = this->FragTrap::getAttackDamage();
// 	return ;
// }

// DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) {
//     _name = name + "_clap_name";
//     _hitPoints = this->FragTrap::getHitPoints();
//     _energyPoints = this->ScavTrap::getEnergyPoints();
//     _attackDamage = this->FragTrap::getAttackDamage();
// }


DiamondTrap::~DiamondTrap() {
  	std::cout << "-- DiamondTrap default destructor called" << std::endl;
	return ;  
}

// void    DiamondTrap::whoAmI() {
//     std::cout   << "DiamondTrap : "
//                 << this->getName()
//                 << " sub object of "
//                 << ClapTrap::getName()
//                 << std::endl;
// }