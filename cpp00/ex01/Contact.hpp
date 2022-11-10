/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:47:24 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/10 18:16:22 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
    public:
        std::string first_name; 
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};