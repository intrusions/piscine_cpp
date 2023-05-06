/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:48:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/06 21:25:07 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

/* La classe MateriaSource herite de l'interface ImateriaSource.
la fonction learnMateria() permet d'ajouter un spell (Ice ou Cure)
au tableau.
CreateMateria() permet de cree un spell (en fonction du type passer en parametre)
si le spell a precedement ete appris. */

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
