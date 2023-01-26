/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:39:14 by jucheval          #+#    #+#             */
/*   Updated: 2023/01/27 00:10:29 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Harl {
    private:
        int     gravity_level;

    public:
        Harl();
        ~Harl();
        int     getLevelGravity();
        void    setLevelGravity(int lvl);
        void    printDebugMessage();
        void    printInfoMessage();
        void    printWarningMessage();
        void    printErrorMessage();
};
