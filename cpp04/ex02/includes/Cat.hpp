/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:30 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:07:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &obj);
		virtual ~Cat();

		Cat		&operator=(const Cat &obj);

		void	makeSound() const;
};
