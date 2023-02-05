/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:44:23 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 22:47:47 by jucheval         ###   ########.fr       */
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
		~Weapon();
		
		const std::string	&getType();
		void				setType(std::string name);
};
