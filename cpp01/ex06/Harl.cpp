/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:38:35 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/27 00:12:55 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
    return ;
}

Harl::~Harl() {
    return ;
}

int     Harl::getLevelGravity() {
    return this->gravity_level;
}

void    Harl::setLevelGravity(int lvl) {
    this->gravity_level = lvl;
}

void    Harl::printDebugMessage() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
	<< std::endl;
}

void    Harl::printInfoMessage() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" 
	<< std::endl;
}

void    Harl::printWarningMessage() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been comin for years whereas you started working here since last month."
	<< std::endl;
}

void    Harl::printErrorMessage() {
    std::cout << "This is unacceptable ! I want to speak to the manager now."
	<< std::endl;
}