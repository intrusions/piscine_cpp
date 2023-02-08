/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:52:17 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/08 05:27:44 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *new_z = NewZombie("Bar");
    randomChump("Foo");
    
    Zombie *new_zz = NewZombie("42");
    randomChump("school");

    delete new_z;
    delete new_zz;
}