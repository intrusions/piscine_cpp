/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:54:42 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/27 23:53:41 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	
	MutantStack<int> mstack;
	
	std::cout << "-------------- native function" << std::endl;
	mstack.push(5);
	mstack.push(10);
	std::cout << "top : " << mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << "new top : " << mstack.top() << std::endl;
	std::cout << "size of stack : " << mstack.size() << std::endl << std::endl;
	
	mstack.push(15);
	mstack.push(20);
	mstack.push(25);
	mstack.push(30);
	
	
	std::cout << "-------------- iterator" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << "-------------- const iterator" << std::endl;
	for (MutantStack<int>::const_iterator it = mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << std::endl;
		// *it = 42; // does not compile
	}
	std::cout << std::endl;
	
	std::cout << "-------------- copy constructor" << std::endl;
	MutantStack<int> s1(mstack);
	for (MutantStack<int>::iterator it = s1.begin(); it != s1.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << "-------------- assignment constructor" << std::endl;
	MutantStack<int> s2 = s1;
	for (MutantStack<int>::iterator it = s2.begin(); it != s2.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;
}
