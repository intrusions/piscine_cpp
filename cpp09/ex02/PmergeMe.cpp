/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:34 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/15 19:38:20 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* constructor/destructor */
PmergeMe::PmergeMe() : _jacobsthal(_init_jacobsthal()) {}

PmergeMe::PmergeMe(const PmergeMe &cpy) : _jacobsthal(_init_jacobsthal()) { (void)cpy; }

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
				throw std::invalid_argument("error: invalid character in input");
		}
	}
}


/* main function about algorithm */
void	PmergeMe::start_ford_johson_vector_c(int ac, char **av) {

	std::clock_t	start_vector = std::clock();

	_fill_container(ac, av, _vector_c);
	_sort_pair(_vector_c);

	_merge_sort(_vector_c, 0, _vector_c.size() - 1);
	
	std::vector<int32_t> second_vector = _creat_vector_from_pair();
	_binary_insert_sort(_vector_c, second_vector);
	// __print_vector_element__(_vector_c);

	std::clock_t end_vector = std::clock();
	_duration_vector_c = ((double)end_vector / CLOCKS_PER_SEC * 1000) - ((double)start_vector / CLOCKS_PER_SEC * 1000);
}

void	PmergeMe::start_ford_johson_deque_c(int ac, char **av) {

	std::clock_t	start_deque = std::clock();

	_fill_container(ac, av, _deque_c);
	_sort_pair(_deque_c);
	
	_merge_sort(_deque_c, 0, _deque_c.size() - 1);

	std::deque<int32_t> second_deque = _creat_deque_from_pair();
	_binary_insert_sort(_deque_c, second_deque);
	// __print_vector_element__(_deque_c);

	std::clock_t end_deque = std::clock();	
	_duration_deque_c = ((double)end_deque / CLOCKS_PER_SEC * 1000) - ((double)start_deque / CLOCKS_PER_SEC * 1000);
}


/* basic algorithm */
template <class T>
void	PmergeMe::_sort_pair(T &a) {
	
	for (typename T::iterator it = a.begin(); it != a.end(); it++) {
		if (it->second < it->first && it->second != -1) {
			std::swap(it->first, it->second);
		}
	}
};


/* merge_sort algorithm */
template <typename T>
void	PmergeMe::_merge_sort(T &c, int32_t beg, int32_t end) {
	
	if (beg < end) {
		
		int32_t mid = (beg + end) / 2;
		_merge_sort(c, beg, mid);
		_merge_sort(c, mid + 1, end);
		_merge(c, beg, mid, end);
	}
}

template <typename T>
void	PmergeMe::_merge(T &c, int32_t left, int32_t mid, int32_t right) {

	// __print_vector_element__(c);
	// std::cout	<< "left :" << left << " | "
	// 			<< "mid  :" << mid << " | "
	// 			<< "right:" << right << " | "
	// 			<< std::endl
	// 			<< std::endl;

	int32_t	sub_array_one = mid - left + 1;
	int32_t	sub_array_two = right - mid;
 
	int32_t *left_array = new int32_t[sub_array_one];
	int32_t *right_array = new int32_t[sub_array_two];
 
	for (int32_t i = 0; i < sub_array_one; i++)
		left_array[i] = c[left + i].first;
	for (int32_t j = 0; j < sub_array_two; j++)
		right_array[j] = c[mid + 1 + j].first;
 
	int32_t index_of_sub_array_one = 0;
	int32_t index_of_sub_array_two = 0;
	int32_t index_of_merged_array = left;
 
	while (index_of_sub_array_one < sub_array_one && index_of_sub_array_two < sub_array_two) {
		if (left_array[index_of_sub_array_one] <= right_array[index_of_sub_array_two]) {
			c[index_of_merged_array].first = left_array[index_of_sub_array_one];
			index_of_sub_array_one++;
		} else {
			c[index_of_merged_array].first = right_array[index_of_sub_array_two];
			index_of_sub_array_two++;
		}
		index_of_merged_array++;
	}

	while (index_of_sub_array_one < sub_array_one) {
		c[index_of_merged_array].first = left_array[index_of_sub_array_one];
		index_of_sub_array_one++;
		index_of_merged_array++;
	}

	while (index_of_sub_array_two < sub_array_two) {
		c[index_of_merged_array].first = right_array[index_of_sub_array_two];
		index_of_sub_array_two++;
		index_of_merged_array++;
	}

	delete[] left_array;
	delete[] right_array;
}


/* binary_insert_sort algorithm */
template <typename T, typename G>
void	PmergeMe::_binary_insert_sort(T &c, G &second_c)
{
	typename G::iterator	elem;
	int32_t					index;
	
	while (!second_c.empty()) {
		
		elem = _get_pos(second_c);
		if (elem != second_c.end()) {
			index = _binary_search(c, *elem, 0, c.size());
			_insert(c, *elem, index);
			second_c.erase(elem);
		} else {
			index = _binary_search(c, *(second_c.begin()), 0, c.size());
			_insert(c, *(second_c.begin()), index);
			second_c.erase(second_c.begin());
		}
	}
};

template <typename T>
int32_t	 PmergeMe::_binary_search(T &c, int32_t value, int32_t left, int32_t right) {
	
	if (abs(left - right) <= 1)
		return (left);
	
	int32_t	mid = (left + right) / 2 - 1;
	
	if (value > c[mid].first)
		return (_binary_search(c, value, mid + 1, right));
	else
		return (_binary_search(c, value, left, mid));
};

template <typename T>
void	PmergeMe::_insert(T &c, int32_t value, int32_t index) {

	std::pair<int32_t, int32_t>	pair;

	pair.first = value;
	pair.second = -1;

	if (value > c[index].first) {
		
		if (c.begin() + index < c.end())
			c.insert(c.begin() + index + 1, pair);
		else
			c.insert(c.begin() + index, pair);
	} else {
		c.insert(c.begin() + index, pair);
	}
};

std::vector<int32_t>::iterator PmergeMe::_get_pos(std::vector<int32_t> &vec) {
	
	std::vector<uint64_t>::iterator	it = _jacobsthal.begin();
	std::vector<uint64_t>::iterator	find_res;
	std::vector<int32_t>::iterator 	pos = vec.end();
	int32_t							buff = -1;

	for (std::vector<int32_t>::iterator it2 = vec.begin(); it2 != vec.end(); it2++) {
		
		find_res = find(it, _jacobsthal.end(), *it2);
		if (find_res != _jacobsthal.end() && (buff == -1 || (buff != -1 && buff < find_res - it))) {
			buff = find_res - it;
			pos = it2;
		}
	}
	return (pos);
}

std::deque<int32_t>::iterator PmergeMe::_get_pos(std::deque<int32_t> &deq) {
	
	std::vector<uint64_t>::iterator	it = _jacobsthal.begin();
	std::vector<uint64_t>::iterator	find_res;
	std::deque<int32_t>::iterator 	pos = deq.end();
	int32_t							buff = -1;

	for (std::deque<int32_t>::iterator it2 = deq.begin(); it2 != deq.end(); it2++) {
		
		find_res = find(it, _jacobsthal.end(), *it2);
		if (find_res != _jacobsthal.end() && (buff == -1 || (buff != -1 && buff < find_res - it))) {
			buff = find_res - it;
			pos = it2;
		}
	}
	return (pos);
}

/* utils */
std::vector<uint64_t> PmergeMe::_init_jacobsthal() {
	
	std::vector<uint64_t>	res;
	
	res.push_back(0);
	res.push_back(1);

	for (uint8_t n = 1; n < 31; n++) {
		uint64_t next = res[n] + (res[n - 1] * 2);
		res.push_back(next);
	}
	return (res);
}

template <typename T>
void	PmergeMe::_fill_container(int ac, char **av, T &c) {
	
	std::pair<int32_t, int32_t>	pair;
	int64_t						buffer;

	for (int32_t i = 1; i < ac; i += 2) {
		
		buffer = atol(av[i]);
		if (buffer > INT_MAX)
			throw std::invalid_argument("error: `int32_t` overflow");

		pair.first = buffer;
		
		if (i + 1 < ac) {
			
			buffer = atol(av[i + 1]);
			if (buffer > INT_MAX)
				throw std::invalid_argument("error: `int32_t` overflow");
			pair.second = buffer;
		} else {
			pair.second = -1;
		}
		c.push_back(pair);
	}
}

std::vector<int32_t>	PmergeMe::_creat_vector_from_pair() {
	
	std::vector<int32_t>	res;
	
	for (std::vector<std::pair<int32_t, int32_t> >::iterator it = _vector_c.begin(); it != _vector_c.end(); it++) {
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}

std::deque<int32_t>	PmergeMe::_creat_deque_from_pair() {
	
	std::deque<int32_t>	res;
	
	for (std::deque<std::pair<int32_t, int32_t> >::iterator it = _deque_c.begin(); it != _deque_c.end(); it++) {
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}


/* utils print */
template <typename T>
void PmergeMe::__print_vector_element__(T &c) {
	
	std::cout << "Debug: ";
	for (typename T::iterator it = c.begin(); it != c.end(); it++) {
		std::cout << it->first << " " << it->second << " | ";
	}
	std::cout << std::endl;
}

void	PmergeMe::print_before(int ac, char **av) {

	std::cout << "Before:  ";
	for (int32_t i = 1; i < ac; i++) {
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::print_after() {
	
	std::cout << "After:   ";
	for (std::vector<std::pair<int32_t, int32_t > >::iterator it = _vector_c.begin(); it != _vector_c.end(); it++) {
		std::cout << it->first << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::print_time_vector_c(int ac) {
	
	std::cout	<< "Time to process a range of "
				<< ac - 1
				<< " elements with std::[vector] : "
				<< _duration_vector_c
				<< " us" << std::endl;
}

void	PmergeMe::print_time_deque_c(int ac) {
	
	std::cout	<< "Time to process a range of "
				<< ac - 1
				<< " elements with std::[deque]  : "
				<< _duration_deque_c
				<< " us" << std::endl;
}