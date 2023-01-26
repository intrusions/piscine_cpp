/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:00:11 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 08:29:50 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private:
        Weapon      *weapon;
        std::string name;
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon *Weapon);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon &weapon);
};