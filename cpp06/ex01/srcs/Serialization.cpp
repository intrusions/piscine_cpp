/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:17:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 09:35:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data	*deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }
