/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:55:07 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/26 15:31:58 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name) {
	Zombie *newZombie = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		newZombie[i].setName(name);
	}
	return (newZombie);
}
