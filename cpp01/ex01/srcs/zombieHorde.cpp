/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:55:07 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:56:15 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name) {
	Zombie *new_z = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		new_z[i].set_name(name);
		new_z[i].announce();
	}
	return (new_z);
}
