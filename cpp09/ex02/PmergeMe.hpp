/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/15 19:37:48 by jucheval         ###   ########.fr       */
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
		std::vector<uint64_t>							_jacobsthal;
		
		double											_duration_vector_c;
		double											_duration_deque_c;

		/* init jacobsthal */
		std::vector<uint64_t>	_init_jacobsthal(void);

		/* fill our container with our `std::pair` created with our orignal input,
		and check if any number overflow an `int32_t` */
		template <typename T> void	_fill_container(int ac, char **av, T &c);

		/* swap value in pair if the left value is higher than right value */
		template <typename T> void	_sort_pair(T &a);
		
		/* merge sort */
		template <typename T> void	_merge_sort(T &c, int32_t beg, int32_t end);
		template <typename T> void	_merge(T &a, int32_t beg, int mid, int32_t end);

		/* creat a second container, but this time with no `std::pair`,
		only with number contained in our previous list of pair wihtout `-1` */
		std::vector<int>	_creat_vector_from_pair(void);
		std::deque<int>		_creat_deque_from_pair(void);
		
		/* binary insert sort */
		template <typename T, typename G> void	_binary_insert_sort(T &c, G &second_c);
		template <typename T> int32_t			_binary_search(T &c, int32_t value, int32_t left, int32_t right);
		template <typename T> void				_insert(T &vector, int32_t value, int32_t index);
		
		/* search */
		std::vector<int32_t>::iterator			_get_pos(std::vector<int32_t> &vec);
		std::deque<int32_t>::iterator			_get_pos(std::deque<int32_t> &deq);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		virtual ~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &rhs);

		/* check if user input contain only number */
		void	arg_is_valid(int ac, char **av);

		/* start our algorithm for each type of container, and save the time of it */
		void	start_ford_johson_vector_c(int ac, char **av);
		void	start_ford_johson_deque_c(int ac, char **av);

		/* print the algorithm executing time of our different container with the correct syntax */
		void	print_time_vector_c(int ac);
		void	print_time_deque_c(int ac);

		/* print our list before and after sorting */
		void	print_before(int ac, char **av);
		void	print_after(void);

		/* debug function */
		template <typename T> void	__print_vector_element__(T &c);
};