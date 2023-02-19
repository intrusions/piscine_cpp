/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 03:23:46 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/19 16:42:50 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
	<< std::endl;
}

void	Harl::_info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" 
	<< std::endl;
}

void	Harl::_warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been comin for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::_error() {
	std::cout << "This is unacceptable ! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level) {

	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	void (Harl::*f[4])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*f[i])();
	}
}
