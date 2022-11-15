/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:12:02 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/15 23:57:37 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact::fill_info() {
	while (true) {
		std::cout << "What is your first name ?" << std::endl;
		std::getline(std::cin, this->first_name);
		if (this->first_name.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break ;
	}
	
	while (true) {
		std::cout << "What is your last name ?" << std::endl;
		std::getline(std::cin, this->last_name);
		if (this->last_name.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break ;
	}

	while (true) {
		std::cout << "What is your nickname ?" << std::endl;
		std::getline(std::cin, this->nickname);
		if (this->nickname.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break ;
	}

	while (true) {
		std::cout << "What is your phone number ?" << std::endl;
		std::getline(std::cin, this->phone_number);
		if (this->phone_number.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break;
	}

	while (true) {
		std::cout << "What is your darkest secret ?" << std::endl;
		std::getline(std::cin, this->darkest_secret);
		if (this->darkest_secret.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else
			break;
	}
	std::cout << "Contact added successfully" << std::endl << std::endl;
}