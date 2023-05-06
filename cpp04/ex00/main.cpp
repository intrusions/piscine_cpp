/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/03 22:29:52 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *unknow = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const Animal *croco = new Animal("Croco");
	
	std::cout << unknow->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << croco->getType() << std::endl << std::endl;
	
	unknow->makeSound();
	dog->makeSound();
	cat->makeSound();
	croco->makeSound();
	
	std::cout << "================================" << std::endl;
	delete unknow;
	
	std::cout << "================================" << std::endl;

	delete dog;
	
	std::cout << "================================" << std::endl;
	delete cat;
	
	std::cout << "================================" << std::endl;
	delete croco;
}
