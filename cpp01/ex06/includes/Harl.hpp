/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:39:14 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 01:26:42 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Harl {
	private:
		int     _gravity_level;

	public:
		Harl();
		virtual ~Harl();
		
		int		getLevelGravity();
		void	setLevelGravity(int lvl);
		void	printDebugMessage();
		void	printInfoMessage();
		void	printWarningMessage();
		void	printErrorMessage();
};
