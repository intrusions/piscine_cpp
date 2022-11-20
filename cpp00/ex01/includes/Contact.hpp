/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:47:24 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/20 09:41:41 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Contact {
	public:
	
		std::string first_name; 
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	
		void	fill_info();
};
