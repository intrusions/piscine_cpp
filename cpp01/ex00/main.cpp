/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:52:17 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/19 16:19:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *new_z = NewZombie("Bar");
	new_z->announce();
	
	randomChump("Foo");
	
	Zombie *new_zz = NewZombie("42");
	new_zz->announce();
	
	randomChump("school");

	delete new_z;
	delete new_zz;
}
