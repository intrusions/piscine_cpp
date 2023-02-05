/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:12 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/05 22:38:00 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string     target;
		
	public:
		RobotomyRequestForm(std::string _target);
		~RobotomyRequestForm();

		void	execute(Bureaucrat &bureaucrat) const;
};
