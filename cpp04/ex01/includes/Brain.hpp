/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:09:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 05:48:08 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Brain {
	private:
		std::string     _ideas[100];
		
	public:
		Brain();
		Brain(const Brain &obj);
		virtual ~Brain();

		Brain	&operator=(const Brain &obj);
};
