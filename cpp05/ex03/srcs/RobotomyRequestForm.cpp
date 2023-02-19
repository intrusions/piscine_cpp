/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/17 02:03:14 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyForm", 72, 45)
	, _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat &bureaucrat) const {
	try {
		executeCheck(bureaucrat);
		
		std::cout	<< _target
					<< " Robotomy exec"
					<< std::endl;
	} catch(Form::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(Form::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
}
