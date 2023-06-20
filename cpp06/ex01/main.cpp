/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:04:52 by jucheval          #+#    #+#             */
/*   Updated: 2023/06/20 18:26:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {

	Data		*a = new Data();
	uintptr_t	serializeData;
	Data		*deserializeData;

	std::cout << "Data" << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << "Serialized Data" << std::endl;
	serializeData = Serializer::serialize(a);
	std::cout << serializeData << std::endl << std::endl;

	std::cout << "Deserialized Data" << std::endl;
	deserializeData = Serializer::deserialize(serializeData);
	std::cout << deserializeData << std::endl << std::endl;
	
	delete a;
}
