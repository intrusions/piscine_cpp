/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/03 22:36:40 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	/* Does not compile */
	// const AAnimal *cc = new AAnimal();
	// (void)cc;
	const AAnimal *animalArr[4];
	
	for (int i = 0; i < 4; i++) {
		if (i < 2)
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
		std::cout << "-----------------------------------------" << std::endl;
	}
	
	std::cout << std::endl << std::endl; 
	for (int i = 0; i < 4; i++) {
		delete animalArr[i];
		std::cout << "-----------------------------------------" << std::endl;
	}
	return 0;
}
