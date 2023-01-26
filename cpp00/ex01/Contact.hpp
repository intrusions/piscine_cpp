/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:47:24 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 07:31:03 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Contact {
	private:
	
		std::string _firstName; 
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		~Contact();
		
		void			fill_info();

		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getPhoneNumber(void);
		std::string		getDarkestSecret(void);


		void			setFirstName(std::string firstname);
		void			setLastName(std::string lastname);
		void			setNickname(std::string nickname);
		void			setPhoneNumber(std::string phoneNumber);
		void			setDarkestSecret(std::string darkestSecret);
};
