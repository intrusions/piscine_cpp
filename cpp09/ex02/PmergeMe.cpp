/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:34 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/07 08:48:13 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* constructor/destructor */
PmergeMe::PmergeMe() : _jacob(init_jacob()) {}

PmergeMe::PmergeMe(const PmergeMe &cpy) : _jacob(init_jacob()) { (void)cpy; }

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


/* utils */
std::vector<long long unsigned>	PmergeMe::init_jacob(void) {
	
	static const int arr[] = {0, 1, 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941};
	std::vector<long long unsigned> res(arr, arr + sizeof(arr) / sizeof(arr[0]));
	return (res);
}

template <typename T>
void	PmergeMe::fill_container(int ac, char **av, T &c) {
	
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

std::vector<int>	PmergeMe::creat_vector_from_pair() {
	
	std::vector<int>	res;
	
	for (std::vector<std::pair<int, int> >::iterator it = _vector_c.begin(); it != _vector_c.end(); it++) {
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}

std::deque<int>	PmergeMe::creat_deque_from_pair() {
	
	std::deque<int>	res;
	
	for (std::deque<std::pair<int, int> >::iterator it = _deque_c.begin(); it != _deque_c.end(); it++) {
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}


/* main function about algorithm */
void	PmergeMe::start_ford_johson_vector_c(int ac, char **av) {

	std::clock_t	start_vec = std::clock();

	fill_container(ac, av, _vector_c);
	sort_pair(_vector_c);
	
	merge_sort(_vector_c, 0, _vector_c.size() - 1);
	
	std::vector<int> second_vector = creat_vector_from_pair();
	binary_insert_sort(_vector_c, second_vector);

	std::clock_t end_vec = std::clock();
	_duration_vector_c = (double) ((double) ((double) end_vec / (double) CLOCKS_PER_SEC * 1000) - (double)((start_vec / (double) CLOCKS_PER_SEC) * 1000));
}

void	PmergeMe::start_ford_johson_deque_c(int ac, char **av) {

	std::clock_t	start_deque = std::clock();

	fill_container(ac, av, _deque_c);
	sort_pair(_deque_c);
	
	merge_sort(_deque_c, 0, _deque_c.size() - 1);
	
	std::deque<int> second_deque = creat_deque_from_pair();
	binary_insert_sort(_deque_c, second_deque);

	std::clock_t end_deque = std::clock();
	_duration_deque_c = (double) ((double) ((double) end_deque / (double) CLOCKS_PER_SEC * 1000) - (double)((start_deque / (double) CLOCKS_PER_SEC) * 1000));
}


/* algorithm */
template <class T>
void	PmergeMe::sort_pair(T &a) {
	
	for (typename T::iterator it = a.begin(); it != a.end(); it++) {
		if (it->second < it->first && it->second != -1) {
			std::swap(it->first, it->second);
		}
	}
};

template <typename T>
void	PmergeMe::merge_sort(T &a, int beg, int end)
{
	if (beg < end)
	{
		int mid = (beg + end) / 2;
		merge_sort(a, beg, mid);
		merge_sort(a, mid + 1, end);
		merge(a, beg, mid, end);
	}
}

template <typename T>
void	PmergeMe::merge(T &c, int left, int mid, int right) {

	int	sub_array_one = mid - left + 1;
	int	sub_array_two = right - mid;
 
	int *left_array = new int[sub_array_one];
	int *right_array = new int[sub_array_two];
 
	for (int i = 0; i < sub_array_one; i++)
		left_array[i] = c[left + i].first;
	for (int j = 0; j < sub_array_two; j++)
		right_array[j] = c[mid + 1 + j].first;
 
	int index_of_sub_array_one = 0;
	int index_of_sub_array_two = 0;
	int index_of_merged_array = left;
 
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

template <typename T>
int32_t	 PmergeMe::binary_search(T &vector, int value, int L, int R) {
	
	if (abs(L - R) <= 1)
		return (L);
	
	int	mid = (L + R) / 2 - 1;
	
	if (value > vector[mid].first)
		return (binary_search(vector, value, mid + 1, R));
	else
		return (binary_search(vector, value, L, mid));
};

std::vector<int32_t>::iterator PmergeMe::get_pos(std::vector<int> &vec) {
	
	std::vector<long long unsigned>::iterator	it = _jacob.begin();
	std::vector<long long unsigned>::iterator	find_res;
	std::vector<int>::iterator 					pos = vec.end();
	int											buff = -1;

	for (std::vector<int>::iterator it2 = vec.begin(); it2 != vec.end(); it2++) {
		
		find_res = find(it, _jacob.end(), *it2);
		if (find_res != _jacob.end() && (buff == -1 || (buff != -1 && buff < find_res - it))) {
			buff = find_res - it;
			pos = it2;
		}
	}
	return (pos);
}

std::deque<int32_t>::iterator PmergeMe::get_pos(std::deque<int> &deq) {
	
	std::vector<long long unsigned>::iterator	it = _jacob.begin();
	std::vector<long long unsigned>::iterator	find_res;
	std::deque<int>::iterator 					pos = deq.end();
	int											buff = -1;

	for (std::deque<int>::iterator it2 = deq.begin(); it2 != deq.end(); it2++) {
		
		find_res = find(it, _jacob.end(), *it2);
		if (find_res != _jacob.end() && (buff == -1 || (buff != -1 && buff < find_res - it))) {
			buff = find_res - it;
			pos = it2;
		}
	}
	return (pos);
}

template <typename T>
void	PmergeMe::insert(T &vector, int value, int index) {

	std::pair<int, int>	pair;

	pair.first = value;
	pair.second = -1;

	if (value > vector[index].first) {
		
		if (vector.begin() + index < vector.end())
			vector.insert(vector.begin() + index + 1, pair);
		else
			vector.insert(vector.begin() + index, pair);
	} else {
		vector.insert(vector.begin() + index, pair);
	}
};


template <typename T, typename G>
void	PmergeMe::binary_insert_sort(T &c, G &second_c)
{
	typename G::iterator	elem;
	int						index;
	
	while (!second_c.empty()) {
		
		elem = get_pos(second_c);
		if (elem != second_c.end()) {
			index = binary_search(c, *elem, 0, c.size());
			insert(c, *elem, index);
			second_c.erase(elem);
		} else {
			index = binary_search(c, *(second_c.begin()), 0, c.size());
			insert(c, *(second_c.begin()), index);
			second_c.erase(second_c.begin());
		}
	}
};

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