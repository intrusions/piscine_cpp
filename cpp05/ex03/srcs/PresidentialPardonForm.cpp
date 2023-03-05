/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:42:53 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:23:41 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialForm", 25, 5)
	, _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) 
	: AForm("PresidentialForm", 25, 5)
	, _target(obj._target) {}


PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

bool	PresidentialPardonForm::execute(Bureaucrat &bureaucrat) const {
	try {
		AForm::execute(bureaucrat);
		
		std::cout	<< _target
					<< " est pardonnée par Zaphod Beeblebrox."
					<< std::endl;
		return (1);
	} catch(AForm::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(AForm::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
	return (0);
}