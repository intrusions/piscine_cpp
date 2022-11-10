/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:28 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/10 18:09:06 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
// #include "PhoneBook.hpp"
#include <iostream>
#include <string>

void add(void) {

	Contact new_user;
	
	std::cout << "first_name ?" << std::endl;
	std::cin << new_user.first_name << std::endl;


	std::cout << "last_name ?" << std::endl;
	std::cin << new_user.last_name << std::endl;

	std::cout << "nickname ?" << std::endl;
	std::cin << new_user.nickname << std::endl;


	std::cout << "phone_number ?" << std::endl;
	std::cin << new_user.phone_number << std::endl;


	std::cout << "darkest_secret ?" << std::endl;
	std::cin << new_user.darkest_secret << std::endl;

}

int main(void) {
	std::string str;
	
	std::cin >> str;
	if (!str.compare("ADD")) {
		std::cout << "ADD" << std::endl;
	
	}
	
}