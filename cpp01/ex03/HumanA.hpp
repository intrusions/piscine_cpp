/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:57:33 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/17 23:31:08 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        HumanA(std::string name, Weapon weapon);
        Weapon      weapon;
        std::string name;
    public:
        void    attack();
};
