/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:56:00 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 04:10:26 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "++ ScavTrap empty constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) 
	: ClapTrap(name, 100, 50, 20)
{
	std::cout << "++ ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &obj) {
	std::cout << "++ ScavTrap copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());

	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << "-- ScavTrap descructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj) {
	std::cout << "++ ScavTrap asignement constructor called" << std::endl;
	
	if (this != &obj) {
		setName(obj.getName());
		setHitPoints(obj.getHitPoints());
		setEnergyPoints(obj.getEnergyPoints());
		setAttackDamage(obj.getAttackDamage());
	}
	return (*this);
}

void    ScavTrap::guardGate() const{
	std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
	return ;
}

void    ScavTrap::attack(const std::string &target) {
	if (getHitPoints() && getEnergyPoints()) {
		setEnergyPoints(getEnergyPoints() - 1);

		std::cout	<< "ScavTrap " << getName()
					<< " attacks " << target << ", "
					<< "causing " << getAttackDamage()
					<< " points of damage!"
					<< std::endl;
	}
	else
		std::cout	<< "ScavTrap " << getName() 
					<< " can't attack because hes dead " 
					<< std::endl;
	return ;
}
