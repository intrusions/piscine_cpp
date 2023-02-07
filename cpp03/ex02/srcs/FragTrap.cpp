/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:58:38 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:50:36 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "++ FragTrap empty constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "++ FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &obj) {
	std::cout << "++ FragTrap copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());

	return ;
}

FragTrap::~FragTrap() {
	std::cout << "-- FragTrap descructor called" << std::endl;
	return ;
}

void    FragTrap::highFivesGuys() const {
	std::cout << "do you want a high fives ?" << std::endl;
	return ;
}