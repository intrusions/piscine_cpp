/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:01:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/16 03:45:44 by jucheval         ###   ########.fr       */
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
	return ;
}

DiamondTrap::~DiamondTrap() {
  	std::cout << "-- DiamondTrap default destructor called" << std::endl;
	return ;  
}


void    DiamondTrap::whoAmI() {
    std::cout   << "DiamondTrap : "
                << DiamondTrap::getName()
                << " sub object of "
                << ClapTrap::getName()
                << std::endl;
}

std::string	DiamondTrap::getName(void) const { return (_name); }