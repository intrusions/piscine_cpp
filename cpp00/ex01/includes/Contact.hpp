/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:47:24 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/14 21:30:59 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class Contact {
	private:
	
		std::string first_name; 
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
	public:
	
	/* ADD */
	std::string	get_first_name();
	void		set_first_name(std::string _first_name);
	std::string get_last_name();
	void		set_last_name(std::string _last_name);
	std::string get_nickname();
	void		set_nickname(std::string _nickname);
	std::string	get_phone_number();
	void		set_phone_number(std::string _phone_number);
	std::string	get_darkest_secret();
	void		set_darkest_secret(std::string _darkest_secret);

	/* SEARCH */
};