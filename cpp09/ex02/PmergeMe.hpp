/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/07 06:28:06 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <vector>
#include <deque>
#include <utility>
#include <limits.h>
#include <stdint.h>
#include <cstdlib>
#include <ctime>
#include <algorithm>


class PmergeMe {

	private:
		std::vector<std::pair<int32_t, int32_t> >		_vector_c;
		std::deque<std::pair<int32_t, int32_t> >		_deque_c;
		std::vector<long long unsigned>					_jacob;
		
		double											_duration_vector_c;
		double											_duration_deque_c;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		virtual ~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &rhs);

		void							arg_is_valid(int ac, char **av);
		std::vector<long long unsigned>	init_jacob(void);
		

		void							fill_vector_c(int ac, char **av);
		void							start_ford_johson_vector_c(void);
		void							merge_sort(std::vector<std::pair<int32_t, int32_t> > &a, int beg, int end);
		void							merge(std::vector<std::pair<int32_t, int32_t> > &a, int beg, int mid, int end);
		std::vector<int>				creat_vector_from_pair();
		void							binary_insert_sort(std::vector<std::pair<int32_t, int32_t > > &vector, std::vector<int32_t> &second_vector);
		std::vector<int32_t>::iterator	get_pos(std::vector<int> &vec);
		int32_t							binary_search(std::vector<std::pair<int32_t, int32_t > > &vector, int value, int L, int R);
		void							insert(std::vector<std::pair<int32_t, int32_t > > &vector, int value, int index);


		void							print_time_vector_c(int ac);



		void	print_before(int ac, char **av);
		void	print_after(void);

		void __print_vector_element__(void);
};