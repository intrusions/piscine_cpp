/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:23:20 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/03 01:41:52 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	FragTrap a;
	FragTrap b("Sylvain");
	FragTrap c(b);
	FragTrap d("Carl");

	a = d;

	std::cout << "Hp: " << a.getHitPoints() << " Ep: " << a.getEnergyPoints() << " Ad: " << a.getAttackDamage() << " Name: " << a.getName() << std::endl;
	std::cout << "Hp: " << b.getHitPoints() << " Ep: " << b.getEnergyPoints() << " Ad: " << b.getAttackDamage() << " Name: " << b.getName() << std::endl;
	std::cout << "Hp: " << c.getHitPoints() << " Ep: " << c.getEnergyPoints() << " Ad: " << c.getAttackDamage() << " Name: " << c.getName() << std::endl;
	std::cout << "Hp: " << d.getHitPoints() << " Ep: " << d.getEnergyPoints() << " Ad: " << d.getAttackDamage() << " Name: " << d.getName() << std::endl;
	
	return 0;
}
