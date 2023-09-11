/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:15:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/11 23:40:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Data.hpp>
#include <stdint.h>
#include <iostream>

class Serializer {
	private:

	public:
		Serializer();
		Serializer(Serializer &obj);

		virtual ~Serializer();
	
		Serializer &operator=(Serializer &rhs);

		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};
