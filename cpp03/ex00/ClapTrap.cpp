/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:25:13 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/02 00:00:11 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "++ ClapTrap empty constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string _name)
	: name(_name)
	, hitPoints(10)
	, energyPoints(10)
	, attackDamage(0) 
{
	std::cout << "++ ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string _name, uint32_t _hitPoints, uint32_t _energyPoints, uint32_t _attackDamage) 
	: name(_name)
	, hitPoints(_hitPoints)
	, energyPoints(_energyPoints)
	, attackDamage(_attackDamage)	
{
	std::cout << "++ ClapTrap constructor called by ScavTrap" << std::endl;
	return ;
}


ClapTrap::~ClapTrap() {
	std::cout << "-- ClapTrap descructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &obj) {
	std::cout << "++ ClapTrap asignement constructor called" << std::endl;
	
	setName(obj.name);
	setHitPoints(obj.hitPoints);
	setEnergyPoints(obj.energyPoints);
	setAttackDamage(obj.attackDamage);
	
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &obj) {
	std::cout << "++ ClapTrap copy constructor called" << std::endl;
	
	setName(obj.name);
	setHitPoints(obj.hitPoints);
	setEnergyPoints(obj.energyPoints);
	setAttackDamage(obj.attackDamage);
}

void	ClapTrap::attack(const std::string &target) {
	if (getHitPoints() && getEnergyPoints()) {
		setEnergyPoints(getEnergyPoints() - 1);
		
		std::cout	<< "ClapTrap " << getName()
					<< " attacks " << target << ", "
					<< "causing " << getAttackDamage()
					<< " points of damage!"
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << getName() 
					<< " can't attack because is dead " 
					<< std::endl;
	return ;
}

void	ClapTrap::beRepaired(uint32_t amount) {
	if (getHitPoints() && getEnergyPoints()) {
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);

		std::cout	<< "ClapTrap " << getName()
					<< " + " << amount
					<< " hit points"
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << getName() 
					<< " can't be repaired because is dead " 
					<< std::endl;
	return ;
}

void	ClapTrap::takeDamage(uint32_t amount) {
	amount >= getEnergyPoints() ? setEnergyPoints(0) : setEnergyPoints(getEnergyPoints() - amount);

	std::cout	<< "ClapTrap " << getName()
				<< " lost " << amount
				<< " energy points"
				<< std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const {
	return (this->name);
}

uint32_t	ClapTrap::getHitPoints(void) const {
	return (this->hitPoints);
}

uint32_t	ClapTrap::getEnergyPoints(void) const {
	return (this->energyPoints);
}

uint32_t	ClapTrap::getAttackDamage(void) const {
	return (this->attackDamage);
}


void		ClapTrap::setName(std::string n) {
	this->name = n;
}

void		ClapTrap::setHitPoints(uint32_t v) {
	this->hitPoints = v;
}

void		ClapTrap::setEnergyPoints(uint32_t v) {
	this->energyPoints = v;
}

void		ClapTrap::setAttackDamage(uint32_t v) {
	this->attackDamage = v;
}