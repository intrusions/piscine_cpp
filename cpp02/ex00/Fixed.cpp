/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/27 06:08:07 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->val = 0;
    return ;
}

// Fixed::Fixed(Fixed &r){
//     std::cout << "Copy constructor called" << std::endl;
//     this->val = r.getRawBits();
//     return ;
// }

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed Fixed::operator=(Fixed &r) {
    std::cout << "Copy assignment operator called" << std::endl;
    
    this->val = r.getRawBits();
    return (*this);    
}


int	Fixed::getRawBits() const {
    std::cout << "GetRawBits member function called" << std::endl;
    return (this->val);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
    this->val = raw;
}