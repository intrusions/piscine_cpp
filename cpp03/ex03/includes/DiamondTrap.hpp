/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:51:17 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/06 23:37:46 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string     _name;
		
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();

		// void	whoAmI();
};
