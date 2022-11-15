/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:23:09 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/15 23:56:54 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
	std::string	input;
	PhoneBook	phb;
	
	while (true) {
		std::cout << "Enter a valid commande : [ADD] [SEARCH] [EXIT]" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phb.add();
		else if (input == "SEARCH")
			phb.search();
		else if (input == "EXIT")
			return 0;
	}
}