/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:39:14 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 03:02:27 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Harl {
	private:
		int     _gravity_level;

	public:
		Harl();
		virtual ~Harl();
		
		int		getLevelGravity() const;
		void	setLevelGravity(int lvl);
		void	printDebugMessage() const;
		void	printInfoMessage() const;
		void	printWarningMessage() const;
		void	printErrorMessage() const;
};
