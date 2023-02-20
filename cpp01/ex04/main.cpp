/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:25:08 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/20 19:54:41 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int main (int argc, char **argv) {
	
	if (argc != 4) {
		std::cout << "Inccorect number of arguments" << std::endl;
		return (0);
	}

	if ((std::string)argv[2] == "") {
		std::cout << "Invalid replace" << std::endl;
		return (0);
	}
		
	std::ifstream in_file(argv[1]);
	
	if (in_file) {
		std::string		line;
		int16_t			found = -1;
		std::ofstream	out_file((std::string)argv[1] + ".replace");

		std::getline(in_file, line, '\0');
		while ((found = line.find(argv[2], found == -1 ? found + 1 : found + std::strlen(argv[3]))) != -1) {
			line.erase(found, std::strlen(argv[2]));
			line.insert(found, (std::string)argv[3]);
		}
		out_file << line;
	} else {
		std::cout << "File doesn't exist" << std::endl;
		return (0);
	}	
	return (1);
}
