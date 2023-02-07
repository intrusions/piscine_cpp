/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:44:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:27:06 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {
	private:
		std::string		_type;

	public:
		Weapon();
		Weapon(std::string type);
		virtual ~Weapon();
		
		const std::string	&getType();
		void				setType(std::string name);
};
