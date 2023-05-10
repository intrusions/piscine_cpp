/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 09:17:19 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	/* Does not compile */
	// AAnimal test;
	
	std::cout << "constructor" << std::endl << std::endl;
	const AAnimal *animalArr[4];
	for (int i = 0; i < 4; i++) {
		if (i < 2)
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
		std::cout << "-----------------------------------------" << std::endl;
	}
	
	
	std::cout << std::endl << "destructor" << std::endl << std::endl;
	for (int i = 0; i < 4; i++) {
		delete animalArr[i];
		std::cout << "-----------------------------------------" << std::endl;
	}

	
	std::cout << std::endl << "deep copy" << std::endl << std::endl;
	Dog basic;
	std::cout << "-----------------------------------------" << std::endl;
	{
		Dog tmp = basic;
		std::cout << "-----------------------------------------" << std::endl;
		
		basic.getBrain()->setIdeas(0, "basic");
		tmp.getBrain()->setIdeas(0, "tmp");

		std::cout << basic.getBrain()->getIdeas(0) << std::endl;
		std::cout << tmp.getBrain()->getIdeas(0) << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
	}
	std::cout << basic.getBrain()->getIdeas(0) << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
}