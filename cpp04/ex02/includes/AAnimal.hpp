/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 09:13:11 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

class AAnimal {
	private:

	protected:
		std::string		_type;

	public:
		AAnimal();
		AAnimal(const std::string _type);
		AAnimal(const AAnimal &obj);
		virtual ~AAnimal();
	
		AAnimal			&operator=(const AAnimal &obj);

		std::string		getType() const;
		
		virtual void	makeSound() const = 0;
};
