/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/05 22:20:44 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
	: Form("RobotomyForm", 72, 45)
	, target(_target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat &bureaucrat) const {
	try {
		this->executeCheck(bureaucrat);
		
		std::cout	<< this->target
					<< " Robotomy creation"
					<< std::endl;
	} catch(Form::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(Form::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
}
