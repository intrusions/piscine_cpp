/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:51:04 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 22:22:33 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
    return ;
}

Zombie::~Zombie() {
    std::cout << this->name <<" is destruct" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name) {
    this->name = name;
}
