/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:07:17 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
	private:

	protected:
		std::string		_type;		
		Animal();
		Animal(const std::string type);
		Animal(const Animal &obj);

	public:
		virtual ~Animal();
	
		Animal			&operator=(const Animal &obj);

		std::string		getType() const;
		
		virtual void	makeSound() const;
};
