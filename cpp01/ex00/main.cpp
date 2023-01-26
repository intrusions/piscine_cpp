/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:52:17 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 08:12:32 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
    Zombie *new_z = NewZombie("Bar");
    randomChump("Foo");
    Zombie *new_zz = NewZombie("42");
    randomChump("school");

    delete new_z;
    delete new_zz;
}