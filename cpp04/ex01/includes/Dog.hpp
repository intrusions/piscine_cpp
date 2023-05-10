/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:35 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 09:10:48 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const Dog &obj);
		virtual ~Dog();

		Dog		&operator=(const Dog &obj);

		void	makeSound() const;

		Brain	*getBrain() const;
};
