/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:53:30 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:14:23 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
    private:
        std::string     _name;

    public:
        Zombie();
        virtual ~Zombie();
        void    announce(void);
        void    set_name(std::string name);
};

Zombie* NewZombie (std::string name);
void	randomChump(std::string name);