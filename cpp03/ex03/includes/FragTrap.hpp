/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:56:56 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/06 23:40:49 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
    private:

    public:
		FragTrap(std::string _name);
		FragTrap(FragTrap const &obj);
		virtual ~FragTrap();
        
        void    highFivesGuys() const;
};
