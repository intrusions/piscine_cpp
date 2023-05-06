/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:06:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/06 22:02:36 by jucheval         ###   ########.fr       */
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
