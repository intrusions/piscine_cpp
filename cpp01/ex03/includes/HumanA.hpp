/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:57:33 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 22:36:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon      &weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack();
};
