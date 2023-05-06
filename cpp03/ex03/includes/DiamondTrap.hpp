/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:51:17 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 09:40:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string		_name;
		
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &obj);
		virtual ~DiamondTrap();

		DiamondTrap	operator=(DiamondTrap const &obj);

		std::string	getName(void) const;
		void		whoAmI();
};
