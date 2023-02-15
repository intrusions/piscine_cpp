/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:23:20 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/15 05:15:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap b("Sylvain");
	DiamondTrap c(b);
	DiamondTrap d("Carl");


	std::cout << "Hp: " << b.getHitPoints() << " Ep: " << b.getEnergyPoints() << " Ad: " << b.getAttackDamage() << " Name: " << b.getName() << std::endl;
	std::cout << "Hp: " << c.getHitPoints() << " Ep: " << c.getEnergyPoints() << " Ad: " << c.getAttackDamage() << " Name: " << c.getName() << std::endl;
	std::cout << "Hp: " << d.getHitPoints() << " Ep: " << d.getEnergyPoints() << " Ad: " << d.getAttackDamage() << " Name: " << d.getName() << std::endl;
	// b.whoAmI();
	
	return 0;
}
