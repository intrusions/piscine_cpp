/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:52:17 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/16 21:46:54 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
    randomChump("lunix");
    
    Zombie *new_z = NewZombie("coucou");
    
    randomChump("caca");
    
    delete new_z;
}