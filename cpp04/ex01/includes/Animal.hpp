/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 01:07:57 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
	private:

	protected:
		std::string		type;		

	public:
		Animal();
		Animal(const std::string _type);
		Animal(const Animal &obj);
		virtual ~Animal();
	
		Animal			&operator=(const Animal &obj);

		std::string		getType() const;
		
		virtual void	makeSound() const;
};
