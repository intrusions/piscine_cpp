/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:53:23 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/16 21:46:31 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* NewZombie(std::string name) {
    Zombie *new_z = new Zombie;
    
    new_z->set_name(name);
    new_z->announce();
    return (new_z);
}
