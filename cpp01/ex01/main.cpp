/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:49:54 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 07:45:33 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*zombieArr = zombieHorde(5, "Foo");
	for(uint8_t i = 0; i < 5; i++)
		zombieArr[i].announce();

	delete[] zombieArr;
}