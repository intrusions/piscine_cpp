/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 01:18:26 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const Animal *cc = new Animal();
	// (void)cc;
	const Animal *animalArr[20];
	for (int i = 0; i < 20; i++) {
		if (i < 10)
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
	}
	for (int i = 0; i < 20; i++)
		delete animalArr[i];
	return 0;
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }