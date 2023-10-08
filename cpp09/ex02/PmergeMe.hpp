/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/08 03:09:51 by jucheval         ###   ########.fr       */
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
		std::vector<uint64_t>							_jacob;
		
		double											_duration_vector_c;
		double											_duration_deque_c;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		virtual ~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &rhs);

		/* check if user input contain only number */
		void	arg_is_valid(int ac, char **av);

		/* init jacob */
		std::vector<uint64_t>	init_jacob(void);
		
		/* start our algorithm for each type of container, and save the time of it */
		void	start_ford_johson_vector_c(int ac, char **av);
		void	start_ford_johson_deque_c(int ac, char **av);

		
		/* fill our container with our `std::pair` created with our orignal input,
		and check if any number overflow an `int32_t` */
		template <typename T> void	fill_container(int ac, char **av, T &c);

		/* swap value in pair if the left value is higher than right value */
		template <typename T> void	sort_pair(T &a);
		
		/* merge sort */
		template <typename T> void	merge_sort(T &a, int32_t beg, int32_t end);
		template <typename T> void	merge(T &a, int32_t beg, int mid, int32_t end);

		/* creat a second container, but this time with no `std::pair`,
		only with number contained in our previous list of pair wihtout `-1` */
		std::vector<int>	creat_vector_from_pair(void);
		std::deque<int>		creat_deque_from_pair(void);
		
		/* binary insert sort */
		template <typename T, typename G> void	binary_insert_sort(T &vector, G &second_vector);
		std::vector<int32_t>::iterator			get_pos(std::vector<int32_t> &vec);
		std::deque<int32_t>::iterator			get_pos(std::deque<int32_t> &deq);
		template <typename T> int32_t			binary_search(T &vector, int32_t value, int32_t L, int32_t R);
		template <typename T> void				insert(T &vector, int32_t value, int32_t index);

		/* print the algorithm executing time of our different container with the correct syntax */
		void	print_time_vector_c(int ac);
		void	print_time_deque_c(int ac);

		/* print our list before and after sorting */
		void	print_before(int ac, char **av);
		void	print_after(void);

		/* debug function */
		template <typename T> void	__print_vector_element__(T &c);
};