/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:12:02 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/14 21:35:04 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string get_first_name() {
    return (first_name);
}

void    set_first_name(std::string _first_name) {
    first_name = _first_name;
}

std::string get_last_name() {
    return (last_name);
}
void    set_last_name(std::string _last_name) {
    last_name = _last_name;
}


std::string get_nickname() {
    return (nickname);
}
void    set_nickname(std::string _nickname) {
    nickname = _nickname;
}


std::string get_phone_number() {
    return (phone_number);
}
void    set_phone_number(std::string _phone_number) {
    phone_number = _phone_number;
}


std::string get_darkest_secret() {
    return (darkest_secret);
}
void    set_darkest_secret(std::string _darkest_secret) {
    darkest_secret = _darkest_secret;
}
