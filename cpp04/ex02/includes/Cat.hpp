/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:30 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/10 09:14:01 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const Cat &obj);
		virtual ~Cat();

		Cat		&operator=(const Cat &obj);

		void	makeSound() const;

		Brain	*getBrain() const;
};
