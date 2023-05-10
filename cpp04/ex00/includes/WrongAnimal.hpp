/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 05:03:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {
	private:

	protected:
		std::string		_type;

	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal();
		
		WrongAnimal			&operator=(const WrongAnimal &obj);

		std::string		getType() const;
		
		void	makeSound() const;
};
