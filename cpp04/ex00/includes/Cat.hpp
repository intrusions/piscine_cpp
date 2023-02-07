/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:10:30 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 03:09:25 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
	private:

	public:
		Cat();
		Cat(const Cat &obj);
		virtual ~Cat();

		Cat		&operator=(const Cat &obj);

		void	makeSound() const;
};
