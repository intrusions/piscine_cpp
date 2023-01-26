/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:28 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 05:26:57 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
	index = 0;
}

void	PhoneBook::add(void) {
	this->index %= 8;
	this->contact_tab[this->index].fill_info();
	this->index++;
}

void	PhoneBook::search(void) {
	std::cout << "        ID|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	
	for (int id = 0; id < 8; id++) {
		std::cout << "         " << id << "|";
		
		if (this->contact_tab[id].getFirstName().length() < 10) {
			for (unsigned long space = 0; space < 10 - this->contact_tab[id].getFirstName().length(); space++)
				std::cout << " ";
			std::cout << this->contact_tab[id].getFirstName() << "|";
		} else {
			for (int i = 0; i < 9; i++)
				std::cout << this->contact_tab[id].getFirstName()[i];
			std::cout << "." << "|";
		}

		if (this->contact_tab[id].getLastName().length() < 10) {
			for (unsigned long space = 0; space < 10 - this->contact_tab[id].getLastName().length(); space++)
				std::cout << " ";
			std::cout << this->contact_tab[id].getLastName() << "|";
		} else {
			for (int i = 0; i < 9; i++)
				std::cout << this->contact_tab[id].getLastName()[i];
			std::cout << "." << "|";
		}

		if (this->contact_tab[id].getNickname().length() < 10) {
			for (unsigned long space = 0; space < 10 - this->contact_tab[id].getNickname().length(); space++)
				std::cout << " ";
			std::cout << this->contact_tab[id].getNickname() << "|" << std::endl;
		} else {
			for (int i = 0; i < 9; i++)
				std::cout << this->contact_tab[id].getNickname()[i];
			std::cout << "." << "|" << std::endl;
		}
	}
	std::cout << "From which user do you want all the information?" << std::endl;
	std::string	user_in;
	
	std::cin >> user_in;
	std::cout << std::endl;
	
	int user_int = std::atoi(user_in.c_str());

	if ((user_int >= 0 && user_int < this->index)) {
		std::cout << "- First name : " << this->contact_tab[user_int].getFirstName() << std::endl;
		std::cout << "- Last name : " << this->contact_tab[user_int].getLastName() << std::endl;
		std::cout << "- Nickname : " << this->contact_tab[user_int].getNickname() << std::endl;
		std::cout << "- Phone number : " << this->contact_tab[user_int].getPhoneNumber() << std::endl;
		std::cout << "- Darkest secret : " << this->contact_tab[user_int].getDarkestSecret() << std::endl << std::endl;
	} else {
		std::cout << "Retry with a valid id" << std::endl << std::endl;
	}
}