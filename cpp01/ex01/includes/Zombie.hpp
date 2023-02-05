/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:50:32 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 22:22:15 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
    private:
        std::string     name;

    public:
        Zombie();
        ~Zombie();
        void    announce(void);
        void    set_name(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);
Zombie* NewZombie (std::string name);