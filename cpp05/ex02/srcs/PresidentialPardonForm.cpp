/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:42:53 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:27:36 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialForm", 25, 5)
	, _target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat &bureaucrat) const {
	try {
		executeCheck(bureaucrat);
		
		std::cout	<< _target
					<< " est pardonnée par Zaphod Beeblebrox."
					<< std::endl;
	} catch(Form::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(Form::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
}