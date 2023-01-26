/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:28 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 01:25:24 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
		
		if ((int)this->contact_tab[id].first_name.length() < 10) {
			for (int space = 0; space < 10 - (int)this->contact_tab[id].first_name.length(); space++)
				std::cout << " ";
			std::cout << this->contact_tab[id].first_name << "|";
		} else {
			for (int i = 0; i < 9; i++)
				std::cout << this->contact_tab[id].first_name[i];
			std::cout << "." << "|";
		}

		if ((int)this->contact_tab[id].last_name.length() < 10) {
			for (int space = 0; space < 10 - (int)this->contact_tab[id].last_name.length(); space++)
				std::cout << " ";
			std::cout << this->contact_tab[id].last_name << "|";
		} else {
			for (int i = 0; i < 9; i++)
				std::cout << this->contact_tab[id].last_name[i];
			std::cout << "." << "|";
		}

		if ((int)this->contact_tab[id].nickname.length() < 10) {
			for (int space = 0; space < 10 - (int)this->contact_tab[id].nickname.length(); space++)
				std::cout << " ";
			std::cout << this->contact_tab[id].nickname << "|" << std::endl;
		} else {
			for (int i = 0; i < 9; i++)
				std::cout << this->contact_tab[id].nickname[i];
			std::cout << "." << "|" << std::endl;
		}
	}
	std::cout << "From which user do you want all the information?" << std::endl;
	std::string	user_in;
	
	std::getline(std::cin, user_in);
	std::getline(std::cin, user_in);
	int user_int = user_in[0] - 48;

	std::cout << std::endl;
	
	
	if ((user_int >= 0 && user_int < this->index)) {
		std::cout << "- First name : " << this->contact_tab[user_int].first_name << std::endl;
		std::cout << "- Last name : " << this->contact_tab[user_int].last_name << std::endl;
		std::cout << "- Nickname : " << this->contact_tab[user_int].nickname << std::endl;
		std::cout << "- Phone number : " << this->contact_tab[user_int].phone_number << std::endl;
		std::cout << "- Darkest secret : " << this->contact_tab[user_int].darkest_secret << std::endl << std::endl;
	} else {
		std::cout << "Retry with a valid id" << std::endl << std::endl;
	}
}
