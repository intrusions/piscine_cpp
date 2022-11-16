/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:49:54 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/16 22:16:09 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void) {

    int N = 3;
    Zombie *zombie_tab = zombieHorde(N, "lunix");

    for (int i = 0; i < N; i++) {
        delete zombie_tab[i];
    }
}