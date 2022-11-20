/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:11:10 by jucheval          #+#    #+#             */
/*   Updated: 2022/11/20 09:38:54 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac; i++)
        for(int j = 0; av[i][j]; j++)
            std::cout << (char)toupper(av[i][j]);
    std::cout << std::endl;
}
