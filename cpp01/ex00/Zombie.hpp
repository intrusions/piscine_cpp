/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:53:30 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/16 21:30:12 by jucheval         ###   ########.fr       */
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

void	randomChump(std::string name);
Zombie* NewZombie (std::string name);