/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 08:32:15 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal {
	private:

	protected:
		std::string		_type;		

	public:
		AAnimal();
		AAnimal(const std::string type);
		AAnimal(const AAnimal &obj);
		virtual ~AAnimal();
	
		AAnimal			&operator=(const AAnimal &obj);

		std::string		getType() const;
		
		virtual void	makeSound() const = 0;
};
