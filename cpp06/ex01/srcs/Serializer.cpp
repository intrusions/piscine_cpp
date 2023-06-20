/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:17:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/06/20 17:20:46 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data	*Serializer::deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }
