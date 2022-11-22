/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:41 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/22 21:35:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 0;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->val = 0;
}

Fixed::Fixed(Fixed &r){
    std::cout << "Copy constructor called" << std::endl;
    val = r.getVal();
}

int Fixed::getVal() {
    return this->val;
}

Fixed Fixed::operator=(Fixed &r) {
    std::cout << "Copy assignment operator called" << std::endl;
    return r;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
    std::cout << "GetRawBits member function called" << std::endl;
    return Fixed::bits;
}

// void Fixed::setRawBits(const int raw) {
//     Fixed::bits = raw;
// }