/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:15:49 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 19:40:34 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name, uint8_t _gradeToSign, uint8_t _gradeToExec) 
	: name(_name)
	, isSigned(0)
	, gradeToSign(_gradeToSign)
	, gradeToExec(_gradeToExec)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form() {
	return ;
}

std::string	Form::getName() const {
	return (this->name);
}

bool		Form::getIsSigned() const {
	return (this->isSigned);
}

uint8_t		Form::getGradeToSign() const {
	return (this->gradeToSign);
}

uint8_t		Form::getGradeToExec() const {
	return (this->gradeToExec);
}

void		Form::beSigned(Bureaucrat bureaucrat) {
	if (!bureaucrat.signForm(*this)) {
		throw Form::GradeTooLowException();
	}
	this->isSigned = 1;

	return ;
}

std::ostream	&operator<<(std::ostream &os, Form &obj) {
	os	<< "Form : " 
		<< obj.getName()
		<< (!obj.getIsSigned() ? " is not signed, " : " is signed, ")
		<< "Bureaucrat need grade " << (int)obj.getGradeToSign()
		<< "For sign it, and grade " << (int)obj.getGradeToExec()
		<< " for execute it" << std::endl;
		
		return (os);
}

std::string		Form::GradeTooHighException::tooHigh() const throw() {
	return ("Form grade is too high");
}

std::string		Form::GradeTooLowException::tooLow() const throw() {
	return ("Form grade is too low");
}
