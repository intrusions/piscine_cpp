/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:28 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 07:47:42 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : index(0) {
	return ;
}

PhoneBook::~PhoneBook() {
	return ;
}

void	PhoneBook::add(void) {
	this->index %= 8;
	this->contact_tab[this->index].fill_info();
	this->index++;
}

std::string space(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::search(void) {
	std::cout << "        ID|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	
	for (int id = 0; id < 8; id++) {
		std::cout << std::setw(10) << id << "|";
		std::cout << std::setw(10) << space(this->contact_tab[id].getFirstName()) << "|";
		std::cout << std::setw(10) << space(this->contact_tab[id].getLastName()) << "|";
		std::cout << std::setw(10) << space(this->contact_tab[id].getNickname()) << "|" << std::endl;
	}
	
	std::cout << "From which user do you want all the information?" << std::endl;
	std::string	user_in;
	std::cin >> user_in;
	std::cout << std::endl;
	int user_int = std::atoi(user_in.c_str());

	if ((user_int >= 0 && user_int < this->index) && isdigit(user_in[0])) {
		std::cout << "- First name : " << this->contact_tab[user_int].getFirstName() << std::endl;
		std::cout << "- Last name : " << this->contact_tab[user_int].getLastName() << std::endl;
		std::cout << "- Nickname : " << this->contact_tab[user_int].getNickname() << std::endl;
		std::cout << "- Phone number : " << this->contact_tab[user_int].getPhoneNumber() << std::endl;
		std::cout << "- Darkest secret : " << this->contact_tab[user_int].getDarkestSecret() << std::endl << std::endl;
	} else
		std::cout << "Retry with a valid id" << std::endl;
}
