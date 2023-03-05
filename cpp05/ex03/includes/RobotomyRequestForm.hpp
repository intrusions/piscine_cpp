/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:12 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:22:57 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string     _target;
		
	public:
		RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(RobotomyRequestForm const &obj);
		virtual ~RobotomyRequestForm();

        RobotomyRequestForm  &operator=(RobotomyRequestForm const &rhs);

		bool	execute(Bureaucrat &bureaucrat) const;
};
