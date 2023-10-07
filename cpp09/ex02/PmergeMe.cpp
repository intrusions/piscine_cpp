/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:34 by jucheval          #+#    #+#             */
/*   Updated: 2023/10/07 06:38:44 by jucheval         ###   ########.fr       */
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
				throw std::invalid_argument("invalid character in input");
		}
	}
}


/* `vector_c` */
void	PmergeMe::fill_vector_c(int ac, char **av) {
	
	std::pair<int32_t, int32_t>	pair;
	int64_t						buffer;

	for (int32_t i = 1; i < ac; i += 2) {
		
		buffer = atol(av[i]);
		if (buffer > INT_MAX)
			throw std::invalid_argument("`int32_t` overflow");

		pair.first = buffer;
		
		if (i + 1 < ac) {
			
			buffer = atol(av[i + 1]);
			if (buffer > INT_MAX)
				throw std::invalid_argument("`int32_t` overflow");
			pair.second = buffer;
		} else {
			pair.second = -1;
		}
		_vector_c.push_back(pair);
	}
}

void	PmergeMe::merge(std::vector<std::pair<int32_t, int32_t> > &a, int left, int mid, int right) {

	int	subArrayOne = mid - left + 1;
	int	subArrayTwo = right - mid;
 
	int *leftArray = new int[subArrayOne];
	int *rightArray = new int[subArrayTwo];
 
	for (int i = 0; i < subArrayOne; i++)
		leftArray[i] = a[left + i].first;
	for (int j = 0; j < subArrayTwo; j++)
		rightArray[j] = a[mid + 1 + j].first;
 
	int indexOfSubArrayOne = 0;
	int indexOfSubArrayTwo = 0;
	int indexOfMergedArray = left;
 
	while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
			a[indexOfMergedArray].first = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		} else {
			a[indexOfMergedArray].first = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}
 
	while (indexOfSubArrayOne < subArrayOne) {
		a[indexOfMergedArray].first = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}
 
	while (indexOfSubArrayTwo < subArrayTwo) {
		a[indexOfMergedArray].first = rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
	
	delete[] leftArray;
	delete[] rightArray;
}

void	PmergeMe::merge_sort(std::vector<std::pair<int32_t, int32_t> > &a, int beg, int end)
{
	if (beg < end)
	{
		int mid = (beg + end) / 2;
		merge_sort(a, beg, mid);
		merge_sort(a, mid + 1, end);
		merge(a, beg, mid, end);
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

std::vector<long long unsigned>	PmergeMe::init_jacob(void)
{
	static const int arr[] = {0, 1, 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941};
	std::vector<long long unsigned> res(arr, arr + sizeof(arr) / sizeof(arr[0]));
	return (res);
}

int32_t	 PmergeMe::binary_search(std::vector<std::pair<int32_t, int32_t > > &vector, int value, int L, int R) {
	
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

void	PmergeMe::insert(std::vector<std::pair<int32_t, int32_t > > &vector, int value, int index) {

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

void	PmergeMe::binary_insert_sort(std::vector<std::pair<int32_t, int32_t > > &vector, std::vector<int32_t> &second_vector)
{
	std::vector<int32_t>::iterator	elem;
	int								index;
	PmergeMe						jacob;
	
	while (!second_vector.empty()) {
		
		elem = get_pos(second_vector);
		if (elem != second_vector.end()) {
			index = binary_search(vector, *elem, 0, vector.size());
			insert(vector, *elem, index);
			second_vector.erase(elem);
		} else {
			index = binary_search(vector, *(second_vector.begin()), 0, vector.size());
			insert(vector, *(second_vector.begin()), index);
			second_vector.erase(second_vector.begin());
		}
	}
};

void	PmergeMe::start_ford_johson_vector_c() {

	std::clock_t	start_vec = std::clock();

	/* swap value in pair if the left value is higher than right value */
	for (std::vector<std::pair<int32_t, int32_t > >::iterator it = _vector_c.begin(); it != _vector_c.end(); it++) {

		if (it->first > it->second) {
			std::swap(it->first, it->second);
		}
	}
	
	/* sort list but only left number */
	merge_sort(_vector_c, 0, _vector_c.size() - 1);
	
	/* creat a second `std::vector`, but this time with no `std::pair`, only with number contained in our previous list */
	std::vector<int> second_vector = creat_vector_from_pair();

	/* binary insert sort */
	binary_insert_sort(_vector_c, second_vector);

	std::clock_t end_vec = std::clock();
	_duration_vector_c = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1000000;

}

void	PmergeMe::print_time_vector_c(int ac) {
	
	std::cout	<< "Time to process a range of "
				<< ac
				<< " elements with std::[vector] : "
				<< _duration_vector_c
				<< " us" << std::endl;
}


/* utils print */
void PmergeMe::__print_vector_element__() {
	
	std::cout << "debug : ";
	
	for (std::vector<std::pair<int32_t, int32_t > >::iterator it = _vector_c.begin(); it != _vector_c.end(); it++) {
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
