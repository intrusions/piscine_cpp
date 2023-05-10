/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 06:33:39 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const Animal *animalArr[4];
	// for (int i = 0; i < 4; i++) {
	// 	if (i < 2)
	// 		animalArr[i] = new Dog();
	// 	else
	// 		animalArr[i] = new Cat();
	// 	std::cout << "-----------------------------------------" << std::endl;
	// }
	
	// std::cout << std::endl << std::endl; 
	// for (int i = 0; i < 4; i++) {
	// 	delete animalArr[i];
	// 	std::cout << "-----------------------------------------" << std::endl;
	// }

	Dog basic;
	std::cout << "-------------------" << std::endl;
	{
		Dog tmp = basic;
		std::cout << "-------------------" << std::endl;
	}
}