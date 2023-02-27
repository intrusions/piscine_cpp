/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:58:38 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 09:07:53 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "++ FragTrap empty constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "++ FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap() {
	std::cout << "++ FragTrap copy constructor called" << std::endl;
	
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

FragTrap::~FragTrap() {
	std::cout << "-- FragTrap descructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &obj) {
	std::cout << "++ FragTrap asignement constructor called" << std::endl;
	
	if (this != &obj) {
		setName(obj.getName());
		setHitPoints(obj.getHitPoints());
		setEnergyPoints(obj.getEnergyPoints());
		setAttackDamage(obj.getAttackDamage());
	}
	return (*this);
}

void    FragTrap::highFivesGuys() const {
	std::cout << "do you want a high fives ?" << std::endl;
}