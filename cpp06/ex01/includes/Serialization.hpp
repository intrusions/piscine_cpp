/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:15:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 09:35:59 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdint.h>
#include <iostream>

typedef struct s_Data {
	int     x;
	int     y;
	bool	isDie;
}			Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);
