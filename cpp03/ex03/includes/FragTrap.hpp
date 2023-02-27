/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:56:56 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/27 09:25:26 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(FragTrap const &obj);
		virtual ~FragTrap();
			
		FragTrap	&operator=(FragTrap const &obj);

		void    highFivesGuys() const;
};
