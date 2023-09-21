/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:11:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/21 18:42:59 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <stdint.h>
#include <exception>
#include <stdlib.h> 

class RPN {
	private:
		std::stack<int>		_stack;

		bool	_is_valid_char(char c);
		bool	_is_operator(char c);
		void	_stack_operation(char sign);

	public:
		RPN();
		RPN(const RPN &cpy);
		virtual ~RPN();

		RPN		&operator=(const RPN &rhs);
		
		void	calcul(const std::string &input);
};