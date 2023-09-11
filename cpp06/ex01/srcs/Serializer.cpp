/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:17:40 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/11 23:40:46 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer &obj) { (void)obj; }

Serializer::~Serializer() {}

Serializer &Serializer::operator=(Serializer &rhs) { (void)rhs; return (*this); };

uintptr_t Serializer::serialize(Data *ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data	*Serializer::deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }
