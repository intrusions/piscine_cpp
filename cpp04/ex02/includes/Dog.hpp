/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:35 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 10:08:34 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &obj);
		virtual ~Dog();

		Dog		&operator=(const Dog &obj);

		void	makeSound() const;
};
