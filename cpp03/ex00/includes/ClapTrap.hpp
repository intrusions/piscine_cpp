/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:24:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 05:59:54 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

class ClapTrap {
	private:
		
		std::string	_name;
		uint32_t	_hitPoints;
		uint32_t	_energyPoints;
		uint32_t	_attackDamage;
	
	protected:
		ClapTrap(std::string name, uint32_t hitPoints, uint32_t energyPoints, uint32_t attackDamage);

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &obj);
		virtual ~ClapTrap();
		
		ClapTrap	&operator=(ClapTrap const &obj);

		std::string		getName() const;
		uint32_t		getHitPoints() const;
		uint32_t		getEnergyPoints() const;
		uint32_t		getAttackDamage() const;

		void			setName(std::string n);
		void			setHitPoints(uint32_t v);
		void			setEnergyPoints(uint32_t v);
		void			setAttackDamage(uint32_t v);

		virtual void	attack(const std::string &target);
		void			takeDamage(uint32_t amount);
		void			beRepaired(uint32_t amount);
};
