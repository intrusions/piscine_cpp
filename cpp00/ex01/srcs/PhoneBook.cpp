/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:28 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/08 07:55:15 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _index(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add(void) {
	_index %= 8;
	_contactArray[_index].fill_info();
	_index++;
}

std::string	space(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::search(void) const{
	std::cout << "        ID|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	
	for (int id = 0; id < 8; id++) {
		std::cout << std::setw(10) << id << "|";
		std::cout << std::setw(10) << space(this->_contactArray[id].getFirstName()) << "|";
		std::cout << std::setw(10) << space(this->_contactArray[id].getLastName()) << "|";
		std::cout << std::setw(10) << space(this->_contactArray[id].getNickname()) << "|" << std::endl;
	}
	
	std::cout << "From which user do you want all the information?" << std::endl;
	std::string	user_in;
	std::cin >> user_in;
	std::cout << std::endl;
	int user_int = std::atoi(user_in.c_str());

	if ((user_int >= 0 && user_int < _index) && isdigit(user_in[0])) {
		std::cout << "- First name : " << _contactArray[user_int].getFirstName() << std::endl;
		std::cout << "- Last name : " << _contactArray[user_int].getLastName() << std::endl;
		std::cout << "- Nickname : " << _contactArray[user_int].getNickname() << std::endl;
		std::cout << "- Phone number : " << _contactArray[user_int].getPhoneNumber() << std::endl;
		std::cout << "- Darkest secret : " << _contactArray[user_int].getDarkestSecret() << std::endl << std::endl;
	} else
		std::cout << "Retry with a valid id" << std::endl;
}
