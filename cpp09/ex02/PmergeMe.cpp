/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:34 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/22 19:10:44 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* constructor/destructor */
PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cpy) {
	(void)cpy;
}

PmergeMe::~PmergeMe() {}

PmergeMe    &PmergeMe::operator=(const PmergeMe &rhs) {
	
	if (this != &rhs) {
		(void)rhs;
	}
	return (*this);
}


/* parsing check */
void    PmergeMe::arg_is_valid(int ac, char **av) {
	
	for (int32_t i = 1; i < ac; i++) {
		for (uint8_t j = 0; av[i][j]; j++) {
			if (!isdigit(av[i][j]) && av[i][j] != ' ')
				throw std::invalid_argument("invalid arguments");
		}
	}
}


/* `vector_c` */
void	PmergeMe::fill_vector_c(int ac, char **av) {
	
	for (int32_t i = 1; i < ac; i++) {
		_vector_c.push_back(atoi(av[i]));
	}
}

void	PmergeMe::ford_johson_vector_c() {

	std::clock_t	start_vec = std::clock();
	uint16_t		n = _vector_c.size();
	
	for (uint16_t i = 0; i < n - 1; i++) {

		uint16_t	min_index = i;
		for (uint16_t j = i + 1; j < n; j++) {
			if (_vector_c[j] < _vector_c[min_index]) {
				min_index = j;
			}
		}

		std::swap(_vector_c[i], _vector_c[min_index]);
	}
	
	std::clock_t end_vec = std::clock();
	_duration_vector_c = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1000000;

}

void	PmergeMe::print_time_vector_c() {
	
	std::cout	<< "Time to process a range of "
				<< _vector_c.size()
				<< " elements with std::[vector] : "
				<< _duration_vector_c
				<< " us" << std::endl;
}

/* `list_c` */
void	PmergeMe::fill_list_c(int ac, char **av) {

	for (int32_t i = 1; i < ac; i++) {
		_list_c.push_back(atoi(av[i]));
	}
}

void	PmergeMe::ford_johson_list_c() {

	std::clock_t	start_list = std::clock();

	// insert algo here
	
	std::clock_t end_list = std::clock();
	_duration_list_c = static_cast<double>(end_list - start_list) / CLOCKS_PER_SEC * 1000000;

}

void	PmergeMe::print_time_list_c() {
	
	std::cout	<< "Time to process a range of "
				<< _list_c.size()
				<< " elements with std::[list] : "
				<< _duration_list_c
				<< " us" << std::endl;
}


/* utils */
void	PmergeMe::print_before(int ac, char **av) {

	std::cout << "Before:  ";

	for (int32_t i = 1; i < ac; i++) {
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::print_after() {
	
	std::cout << "After:   ";

	for (std::vector<uint32_t>::iterator it = _vector_c.begin(); it != _vector_c.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
