/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:42:53 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/05 22:32:48 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
	: Form("PresidentialForm", 25, 5)
	, target(_target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat &bureaucrat) const {
	try {
		this->executeCheck(bureaucrat);
		
		std::cout	<< this->target
					<< " est pardonnée par Zaphod Beeblebrox."
					<< std::endl;
	} catch(Form::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(Form::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
}