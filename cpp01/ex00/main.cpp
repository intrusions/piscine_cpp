/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:52:17 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 03:22:59 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
    randomChump("lunix");
    
    Zombie *new_z = NewZombie("coucou");
    
    randomChump("salut");
    
    delete new_z;
}