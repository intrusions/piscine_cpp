/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 03:15:42 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 03:02:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl {
    private:
        void    _debug(void);
        void    _info(void);
        void    _warning(void);
        void    _error(void);

    public:
        void    complain(std::string level);
};
