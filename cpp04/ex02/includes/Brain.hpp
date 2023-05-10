/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:09:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 09:13:30 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"

class Brain {
	private:
		std::string     _ideas[100];
		
	public:
		Brain();
		Brain(const Brain &obj);
		virtual ~Brain();

		Brain	&operator=(const Brain &obj);

		std::string	getIdeas(uint8_t idx) const;
		void		setIdeas(uint8_t idx, std::string ideas);
};
