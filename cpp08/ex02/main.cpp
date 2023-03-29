/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:54:42 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/29 20:18:37 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "top : " <<mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << "new top : " <<mstack.top() << std::endl;
	std::cout << "size of stack : " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	
	std::cout << "-------------- mstack" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "-------------- copy constructor" << std::endl;
	MutantStack<int> s1(mstack);
	for (MutantStack<int>::iterator it = s1.begin(); it != s1.end(); it++)
		std::cout << *it << std::endl;		
	
	std::cout << "-------------- assignment constructor" << std::endl;
	MutantStack<int> s2 = s1;
	for (MutantStack<int>::iterator it = s2.begin(); it != s2.end(); it++)
		std::cout << *it << std::endl;
}
