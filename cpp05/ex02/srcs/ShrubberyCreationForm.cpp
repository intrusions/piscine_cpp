/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:15:27 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:29:12 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyForm", 145, 137)
	, _target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat &bureaucrat) const {
	try {
		executeCheck(bureaucrat);
		
		std::cout	<< _target
					<< " Shrubbery creation"
					<< std::endl;
	} catch(Form::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(Form::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
}
