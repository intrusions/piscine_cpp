/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:47:04 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 07:32:24 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook {
	private:
		int     index;
		Contact contact_tab[8];

	public:
		PhoneBook();
		~PhoneBook();
		
		void    add();
		void    search();
};