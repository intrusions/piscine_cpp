/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:47:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/08 01:36:16 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact {
	private:
		std::string _firstName; 
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		virtual ~Contact();
		
		void			fill_info();

		std::string		getFirstName(void) const;
		std::string		getLastName(void) const;
		std::string		getNickname(void) const;
		std::string		getPhoneNumber(void) const;
		std::string		getDarkestSecret(void) const;


		void			setFirstName(std::string firstname);
		void			setLastName(std::string lastname);
		void			setNickname(std::string nickname);
		void			setPhoneNumber(std::string phoneNumber);
		void			setDarkestSecret(std::string darkestSecret);
};
