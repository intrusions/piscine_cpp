/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:04:52 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 09:35:23 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main() {
	Data		*a = new Data();
	uintptr_t	serializeData;
	Data		*deserializeData;

	std::cout << "Data" << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << "Serialized Data" << std::endl;
	serializeData = serialize(a);
	std::cout << serializeData << std::endl << std::endl;

	std::cout << "Deserialized Data" << std::endl;
	deserializeData = deserialize(serializeData);
	std::cout << deserializeData << std::endl << std::endl;
	
	delete a;
}
