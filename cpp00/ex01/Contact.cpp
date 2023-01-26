/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:12:02 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 05:22:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

/*GETTER*/
std::string		Contact::getFirstName(void) {
	return (this->_firstName);
}

std::string		Contact::getLastName(void) {
	return (this->_lastName);
}

std::string		Contact::getNickname(void) {
	return (this->_nickname);
}

std::string		Contact::getPhoneNumber(void) {
	return (this->_phoneNumber);
}

std::string		Contact::getDarkestSecret(void) {
	return (this->_darkestSecret);
}

/*SETTER*/
void	Contact::setFirstName(std::string firstname) {
	this->_firstName = firstname;
}

void	Contact::setLastName(std::string lastname) {
	this->_lastName = lastname;
}

void	Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

/*FILL INFO*/
void Contact::fill_info() {
	std::string	tmp;
	
	while (true) {
		std::cout << "What is your first name ?" << std::endl;
		std::cin >> tmp;
		
		if (tmp.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else {
			this->setFirstName(tmp);
			break ;
		}
	}
	
	while (true) {
		std::cout << "What is your last name ?" << std::endl;
		std::cin >> tmp;
		
		if (tmp.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else {
			this->setLastName(tmp);
			break ;
		}
	}

	while (true) {
		std::cout << "What is your nickname ?" << std::endl;
		std::cin >> tmp;
		
		if (tmp.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else {
			this->setNickname(tmp);
			break ;
		}
	}

	while (true) {
		std::cout << "What is your phone number ?" << std::endl;
		std::cin >> tmp;
		
		if (tmp.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else {
			this->setPhoneNumber(tmp);
			break ;
		}
	}

	while (true) {
		std::cout << "What is your darkest secret ?" << std::endl;
		std::cin >> tmp;

		if (tmp.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else {
			this->setDarkestSecret(tmp);
			break ;
		}
	}
	std::cout << "Contact added successfully" << std::endl << std::endl;
}
