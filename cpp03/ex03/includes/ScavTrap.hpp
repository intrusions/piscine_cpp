/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:30:58 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 09:25:28 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:

	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(ScavTrap const &obj);
		virtual ~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &obj);

		void    guardGate() const;
		void    attack(const std::string &target);

};
