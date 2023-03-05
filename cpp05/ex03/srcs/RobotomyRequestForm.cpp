/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:57 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:23:49 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyForm", 72, 45)
	, _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) 
	: AForm("RobotomyForm", 72, 45)
	, _target(obj._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

bool	RobotomyRequestForm::execute(Bureaucrat &bureaucrat) const {
	try {
		AForm::execute(bureaucrat);
		
		std::srand(std::time(NULL));
		int rand = std::rand();
		
		std::cout << "BrRrrrRrrrrrrrRrrr" << std::endl;
		std::cout	<< _target
					<< (rand % 2 ? " is robitized" : " robotization failed")
					<< std::endl;

		return (1);
	} catch(AForm::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(AForm::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
	return (0);
}
