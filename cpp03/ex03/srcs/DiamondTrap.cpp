/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:01:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/06 01:06:08 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap(std::string _name) 
// 	: name(_name)
// 	, ClapTrap(
// 		_name + "_clap_name"
// 		, hitPoints(100)
// 		, energyPoints(50)
// 		, attackDamage(30)
// 	)
// {
// 	std::cout << "++ DiamondTrap default constructor called" << std::endl;
// 	return ;
// }

DiamondTrap::DiamondTrap(std::string _name) 
	: ClapTrap(_name)
	, ScavTrap(_name)
	, ClapTrap(_name)
{
	std::cout << "++ DiamondTrap default constructor called" << std::endl;
	this->name = _name;
	this->ClapTrap::name = _name + "_clap_name";
	this->hitPoints = this->FragTrap::getHitPoints();
	this->energyPoints = this->ScavTrap::getEnergyPoints();
	this->attackDamage = this->FragTrap::getAttackDamage();
	return ;
}

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