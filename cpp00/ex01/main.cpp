/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:23:09 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/08 01:35:59 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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