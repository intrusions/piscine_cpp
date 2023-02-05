/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:53:30 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 08:10:15 by jucheval         ###   ########.fr       */
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

Zombie* NewZombie (std::string name);
void	randomChump(std::string name);