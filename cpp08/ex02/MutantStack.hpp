/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:55:12 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/27 22:22:10 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iosteam>
#include <stack>
#include <stdint.h>

template <typaname T>
class MutantStack {
	private:
		std::stack<T>	_data;	
	
	public:

	
		MutantStack() 			{};
		virtual ~MutantStack()	{};

		bool	empty()			{ return (_data.empty()); }
		int64_t	size()			{ return (_data.size()); }
		T		&top()			{ return (_data.top()); }
		void	push(T &n)		{ _data.push(n); }
		void	emplace(T &n)	{ _data.emplace(n); }
		void	pop() 			{ _data.pop(); }
};
