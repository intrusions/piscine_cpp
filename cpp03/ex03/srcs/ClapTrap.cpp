/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:25:13 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 09:21:16 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "++ ClapTrap empty constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name)
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0)
{
	std::cout << "++ ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, uint32_t hitPoints, uint32_t energyPoints, uint32_t attackDamage) 
	: _name(name)
	, _hitPoints(hitPoints)
	, _energyPoints(energyPoints)
	, _attackDamage(attackDamage)
{
	std::cout << "++ ClapTrap constructor called by other" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj) {
	std::cout << "++ ClapTrap copy constructor called" << std::endl;
	
	setName(obj._name);
	setHitPoints(obj._hitPoints);
	setEnergyPoints(obj._energyPoints);
	setAttackDamage(obj._attackDamage);
}

ClapTrap::~ClapTrap() {
	std::cout << "-- ClapTrap descructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &obj) {
	std::cout << "++ ClapTrap asignement constructor called" << std::endl;
	
	if (this != &obj) {
		setName(obj._name);
		setHitPoints(obj._hitPoints);
		setEnergyPoints(obj._energyPoints);
		setAttackDamage(obj._attackDamage);
	}
	return (*this);
}


void	ClapTrap::attack(const std::string &target) {
	if (getHitPoints() && getEnergyPoints()) {
		
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout	<< "ClapTrap " << getName()
					<< " attacks " << target << ", "
					<< "causing " << getAttackDamage()
					<< " points of damage!"
					<< std::endl;
	
	} else if (!getHitPoints()) {
		std::cout	<< "ClapTrap " << getName() 
					<< " can't attack because is dead " 
					<< std::endl;
	
	} else if (!getEnergyPoints()) {
		std::cout	<< "ClapTrap " << getName() 
					<< " can't attack because he dont have energy points " 
					<< std::endl;
	}
}

void	ClapTrap::beRepaired(uint32_t amount) {
	if (getHitPoints() && getEnergyPoints()) {
		
		setEnergyPoints(getEnergyPoints() - 1);
		setHitPoints(getHitPoints() + amount);
		std::cout	<< "ClapTrap " << getName()
					<< " + " << amount
					<< " hit points"
					<< std::endl;
	
	} else if (!getHitPoints()) {
		std::cout	<< "ClapTrap " << getName() 
					<< " can't be repaired because is dead " 
					<< std::endl;
	
	} else if (!getEnergyPoints()) {
		std::cout	<< "ClapTrap " << getName() 
					<< " can't be repaired because he dont have energy points " 
					<< std::endl;
	}
}

void	ClapTrap::takeDamage(uint32_t amount) {
	amount >= getHitPoints() ? setHitPoints(0) : setHitPoints(getHitPoints() - amount);

	std::cout	<< "ClapTrap " << getName()
				<< " lost " << amount
				<< " hit points"
				<< std::endl;
}

std::string	ClapTrap::getName(void) const { return (_name); }

uint32_t	ClapTrap::getHitPoints(void) const { return (_hitPoints); }

uint32_t	ClapTrap::getEnergyPoints(void) const { return (_energyPoints); }

uint32_t	ClapTrap::getAttackDamage(void) const { return (_attackDamage); }


void		ClapTrap::setName(std::string const n) { _name = n; }

void		ClapTrap::setHitPoints(uint32_t const v) { _hitPoints = v; }

void		ClapTrap::setEnergyPoints(uint32_t const v) { _energyPoints = v; }

void		ClapTrap::setAttackDamage(uint32_t const v) { _attackDamage = v; }
