/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 03:14:28 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/26 23:31:46 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void) {
    Harl    harl;

    harl.complain("ERROR");
    std::cout << std::endl;
    
    harl.complain("DEBUG");
    std::cout << std::endl;
    
    harl.complain("INFO");
    std::cout << std::endl;
    
    harl.complain("WARNING");
    std::cout << std::endl;
}