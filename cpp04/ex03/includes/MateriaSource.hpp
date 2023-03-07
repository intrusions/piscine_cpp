/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:48:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 13:42:10 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*_spellsLearned[4];
		
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &obj);
		virtual ~MateriaSource();
		
		MateriaSource   &operator=(MateriaSource const &obj);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria*	createMateria(std::string const &type);
};
