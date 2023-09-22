/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/22 18:11:08 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <vector>
#include <stdint.h>
#include <cstdlib>
#include <ctime>

#define BEFORE 0
#define AFTER 1

class PmergeMe {

	private:
		std::vector<uint32_t>		_vector_c;
		double						_duration_vector_c;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		virtual ~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &rhs);

		void	arg_is_valid(int ac, char **av);
		
		void	fill_vector_c(int ac, char **av);
		void	ford_johson_vector_c(void);
		void	print_time_vector_c();

		void	print_before(int ac, char **av);
		void	print_after(void);
};