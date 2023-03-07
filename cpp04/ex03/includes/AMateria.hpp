/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:17:28 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/07 13:41:13 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <iostream>
#include <stdint.h>

class ICharacter;

class AMateria {
	private:

	protected:
		std::string		_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &obj);
		virtual ~AMateria();

		AMateria	&operator=(AMateria const &rhs);

		std::string const	&getType() const; 
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};
