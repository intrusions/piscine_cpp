/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:06:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 09:32:49 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice();
		Ice(Ice const &obj);
		virtual ~Ice();

		Ice		&operator=(Ice const &rhs);

		Ice		*clone() const;
		void	use(ICharacter &target);
};
