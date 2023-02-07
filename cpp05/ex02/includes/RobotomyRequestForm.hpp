/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:12 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:24:52 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string     _target;
		
	public:
		RobotomyRequestForm(std::string _target);
		virtual ~RobotomyRequestForm();

		void	execute(Bureaucrat &bureaucrat) const;
};
