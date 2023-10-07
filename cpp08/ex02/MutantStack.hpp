/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:55:12 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/27 23:46:55 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <stdint.h>

template <typename T>
class MutantStack : public std::stack<T> {
	private:

	public:
		MutantStack() 			{};
		MutantStack(MutantStack const &obj) : MutantStack::stack(obj) {}
		virtual ~MutantStack()	{};

		MutantStack	&operator=(MutantStack const &rhs) {
			if (this != &rhs) {
				std::stack<T>::operator=(rhs);
			}
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator 		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

		iterator		begin()				{ return(this->c.begin()); }
		const_iterator	begin()	const		{ return(this->c.begin()); }
		iterator		end()				{ return(this->c.end()); }
		const_iterator	end() const			{ return(this->c.end()); }
};
