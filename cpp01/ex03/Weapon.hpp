/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:44:23 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/18 22:09:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {
	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string type);
		std::string	&getType(); // const
		void		setType(std::string name);
};
