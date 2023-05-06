/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:23:20 by jucheval          #+#    #+#             */
/*   Updated: 2023/04/22 21:27:17 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	
	ClapTrap john("John");
	ClapTrap chuck("Chuck");
	ClapTrap foreign;
	ClapTrap julien(john);
	foreign = chuck;

	john.attack("Chuck");
	chuck.takeDamage(0);
	chuck.beRepaired(10);
	chuck.takeDamage(132);
	chuck.attack("Me");
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("John Doe");
	
	return 0;
}
