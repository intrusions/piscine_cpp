/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 10:11:16 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal {
	private:

	protected:
		std::string		_type;		
		AAnimal();
		AAnimal(const std::string type);
		AAnimal(const AAnimal &obj);

	public:
		virtual ~AAnimal();
	
		AAnimal			&operator=(const AAnimal &obj);

		std::string		getType() const;
		
		virtual void	makeSound() const;
};
