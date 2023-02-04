/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:35 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 00:56:15 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
	private:

	public:
		Dog();
		Dog(const Dog &obj);
		~Dog();

		Dog		&operator=(const Dog &obj);

		void	makeSound() const;
};
