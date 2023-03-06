/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:06:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 09:32:20 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
	private:

	public:
		Cure();
		Cure(Cure const &obj);
		virtual ~Cure();

		Cure	&operator=(Cure const &rhs);

		Cure	*clone() const;
		void	use(ICharacter &target);
};
