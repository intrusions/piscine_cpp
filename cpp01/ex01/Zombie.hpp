/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:50:32 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/16 22:01:53 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
    private:
        std::string     name;

    public:
        ~Zombie();
        void    announce(void);
        void    set_name(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);
Zombie* NewZombie (std::string name);