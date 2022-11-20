/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:25:08 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/20 01:08:12 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int argc, char **argv) {
	
	if (argc != 4) {
		std::cout << "Inccorect number of arguments" << std::endl;
		return (0);
	}
		
	std::ifstream in_file(argv[1]);
	
	if (in_file) {
		std::string		line;
		std::ofstream	out_file((std::string)argv[1] + ".replace");
		
		std::getline(in_file, line, '\0');
		int	found = line.find(argv[2]);
		while (found != -1) {
			// to continue
			found = line.find(argv[2]);
		}
		out_file << line;
			
	} else 
		std::cout << "File doesn't exist" << std::endl;
	return 0;
}