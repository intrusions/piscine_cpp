/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:28 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/14 21:34:52 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void add(void) {

	Contact 	new_user;
	std::string	tmp;

	std::cout << "first_name ?" << std::endl;
	std::cin >> tmp;
	new_user.set_first_name(tmp);

	std::cout << "last_name ?" << std::endl;
	std::cin >> tmp;
	new_user.set_last_name(tmp);

	std::cout << "nickname ?" << std::endl;
	std::cin >> tmp;
	new_user.set_nickname(tmp);

	std::cout << "phone_number ?" << std::endl;
	std::cin >> tmp;
	new_user.set_phone_number(tmp);

	std::cout << "darkest_secret ?" << std::endl;
	std::cin >> tmp;
	new_user.set_darkest_secret(tmp);
}

int main(void) {
	std::string	str;
	
	while (true) {
		std::cin >> str;
		if (!str.compare("ADD"))
			add();
	}
}