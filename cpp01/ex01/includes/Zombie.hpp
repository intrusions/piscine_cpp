/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:50:32 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 05:55:00 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
	private:
		std::string		_name;

	public:
		Zombie();
		virtual ~Zombie();
		
		void	announce(void) const;
		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);
Zombie	*NewZombie (std::string name);
