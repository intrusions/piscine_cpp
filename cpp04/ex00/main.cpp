/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/11 07:12:54 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "================================" << std::endl;
	const Animal *unknow = new Animal();
	
	std::cout << "================================" << std::endl;
	const Animal *dog = new Dog();
	
	std::cout << "================================" << std::endl;
	const Animal *cat = new Cat();
	
	std::cout << "================================" << std::endl;
	const Animal *croco = new Animal("Croco");
	
	
	std::cout << "================================" << std::endl;
	const WrongAnimal *wrong1 = new WrongAnimal();
	
	std::cout << "================================" << std::endl;
	const WrongAnimal *wrong2 = new WrongCat();
	
	
	
	std::cout << "no_type:" << unknow->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << croco->getType() << std::endl;
	
	std::cout << "no_type:" << wrong1->getType() << std::endl;
	std::cout << wrong2->getType() << std::endl << std::endl;


	unknow->makeSound();
	dog->makeSound();
	cat->makeSound();
	croco->makeSound();

	wrong1->makeSound();
	wrong2->makeSound();



	std::cout << "================================" << std::endl;
	delete unknow;
	
	std::cout << "================================" << std::endl;
	delete dog;
	
	std::cout << "================================" << std::endl;
	delete cat;
	
	std::cout << "================================" << std::endl;
	delete croco;

	std::cout << "================================" << std::endl;
	delete wrong1;

	std::cout << "================================" << std::endl;
	delete wrong2;
}
