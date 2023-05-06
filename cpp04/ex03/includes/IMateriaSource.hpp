/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:46:11 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/06 21:25:31 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

/* Interfarce pour la classe MateriaSource */

class IMateriaSource {
	private:
	
	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};
