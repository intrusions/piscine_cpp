/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:04:52 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 10:10:33 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate() {
	Base *newBase;
	
	srand(time(NULL));
	int random = rand() % 3;

	if (random == 0) {
		newBase = new A;
		std::cout << "New A" << std:: endl;
	} else if (random == 1) {
		newBase = new B;
		std::cout << "New B" << std:: endl;
	} else if (random == 2) {
		newBase = new C;
		std::cout << "New C" << std:: endl;
	}
	return (newBase);
}

void	identify(Base *p) {
	if		(dynamic_cast<A *>(p)) { std::cout << "A" << std::endl; }
	else if (dynamic_cast<B *>(p)) { std::cout << "B" << std::endl; }
	else if (dynamic_cast<C *>(p)) { std::cout << "C" << std::endl; }
}

void	identify(Base &p) {
	if		(dynamic_cast<A *>(&p)) { std::cout << "A" << std::endl; }
	else if (dynamic_cast<B *>(&p)) { std::cout << "B" << std::endl; }
	else if (dynamic_cast<C *>(&p)) { std::cout << "C" << std::endl; }
}

int main() {
	A a;
    B b;
    C c;
    
	Base *newRand = generate();
	(void)newRand;

    identify(a);
    identify(b);
    identify(c);

    Base *ptr = &a;
    identify(*ptr);
    
    ptr = &b;
    identify(*ptr);
    
    ptr = &c;
    identify(*ptr);
}
