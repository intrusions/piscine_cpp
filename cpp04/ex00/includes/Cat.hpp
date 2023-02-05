/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:30 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 00:56:39 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
	private:

	public:
		Cat();
		Cat(const Cat &obj);
		~Cat();

		Cat		&operator=(const Cat &obj);

		void	makeSound() const;
};
