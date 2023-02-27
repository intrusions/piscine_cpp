/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:49:54 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/26 15:28:06 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*zombie_tab = zombieHorde(5, "Foo");
	for(uint8_t i = 0; i < 5; i++)
		zombie_tab[i].announce();

	delete[] zombie_tab;
}