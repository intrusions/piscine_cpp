/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:28 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/15 20:47:36 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::add(void) {
	this->index %= 8;
	this->contact_tab[this->index].fill_info();
	this->index++;
}

void	PhoneBook::search(void) {
	for (int id = 0; id < this->index; id++) {
		std::cout << id << " | ";
		std::cout << this->contact_tab[id].first_name << " | ";
		std::cout << this->contact_tab[id].last_name << " | ";
		std::cout << this->contact_tab[id].nickname << " | " << std::endl;
	}
}