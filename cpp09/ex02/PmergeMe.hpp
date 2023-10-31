/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:47 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/31 01:30:08 by jucheval         ###   ########.fr       */
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
		
		double											_duration_vector_c;
		double											_duration_deque_c;


		template <typename T> void	_fill_container(int ac, char **av, T &c);

		template <typename T> void	_sort_pair(T &a);
		
		template <typename T> void	_merge_sort(T &c, int32_t beg, int32_t end);
		template <typename T> void	_merge(T &a, int32_t beg, int mid, int32_t end);

		std::vector<int>	_creat_vector_from_pair(void);
		std::deque<int>		_creat_deque_from_pair(void);
		
		template <typename T, typename G> void	_binary_insert_sort(T &c, G &second_c);
		template <typename T> int32_t			_binary_search(T &c, int32_t value, int32_t left, int32_t right);
		template <typename T> void				_insert(T &vector, int32_t value, int32_t index);
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		virtual ~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &rhs);

		void	arg_is_valid(int ac, char **av);

		void	start_ford_johson_vector_c(int ac, char **av);
		void	start_ford_johson_deque_c(int ac, char **av);

		void	print_time_vector_c(int ac);
		void	print_time_deque_c(int ac);

		void	print_before(int ac, char **av);
		void	print_after(void);

		template <typename T> void	__print_vector_element__(T &c);
};