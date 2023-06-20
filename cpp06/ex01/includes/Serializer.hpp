/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:15:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/06/20 17:20:14 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Data.hpp>
#include <stdint.h>
#include <iostream>

class Serializer {
	private:

	public:
		uintptr_t	serialize(Data *ptr);
		Data		*deserialize(uintptr_t raw);
};
