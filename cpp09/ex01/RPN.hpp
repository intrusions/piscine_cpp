/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:11:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/20 19:05:17 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <stdint.h>

class RPN {
	private:
		std::stack<int>		_n;

	public:
		RPN();

		bool	char_is_valid(char c);
		bool	input_is_valid(std::string str);
		void	fill_stack(std::string str);
		void	calcul();
};