/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:15:49 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:14:35 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, uint8_t gradeToSign, uint8_t gradeToExec) 
	: _name(name)
	, _isSigned(0)
	, _gradeToSign(gradeToSign)
	, _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form() {
	return ;
}

std::string	Form::getName() const {
	return (_name);
}

bool		Form::getIsSigned() const {
	return (_isSigned);
}

uint8_t		Form::getGradeToSign() const {
	return (_gradeToSign);
}

uint8_t		Form::getGradeToExec() const {
	return (_gradeToExec);
}

void		Form::beSigned(Bureaucrat bureaucrat) {
	if (!bureaucrat.signForm(*this)) {
		throw Form::GradeTooLowException();
	}
	_isSigned = 1;
	return ;
}

std::ostream	&operator<<(std::ostream &os, Form &obj) {
	os	<< "Form       " 
		<< obj.getName()
		<< (!obj.getIsSigned() ? " is not signed, " : " is signed, ")
		<< "Bureaucrat need grade " << (int)obj.getGradeToSign()
		<< " For sign it, and grade " << (int)obj.getGradeToExec()
		<< " for execute it" << std::endl;
	return (os);
}

std::string		Form::GradeTooHighException::tooHigh() const throw() {
	return ("Form grade is too high");
}

std::string		Form::GradeTooLowException::tooLow() const throw() {
	return ("Form grade is too low");
}
