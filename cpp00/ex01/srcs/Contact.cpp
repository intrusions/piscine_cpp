/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:12:02 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 07:40:38 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {
	return ;
}

Contact::~Contact() {
	return ;
}

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
	
	std::cout << "What is your first name ?" << std::endl;
	std::cin >> tmp;
	this->setFirstName(tmp);
	
	std::cout << "What is your last name ?" << std::endl;
	std::cin >> tmp;
	this->setLastName(tmp);

	std::cout << "What is your nickname ?" << std::endl;
	std::cin >> tmp;
	this->setNickname(tmp);

	std::cout << "What is your phone number ?" << std::endl;
	std::cin >> tmp;
	this->setPhoneNumber(tmp);

	std::cout << "What is your darkest secret ?" << std::endl;
	std::cin >> tmp;
	this->setDarkestSecret(tmp);
	
	std::cout << "Contact added successfully" << std::endl << std::endl;
}
