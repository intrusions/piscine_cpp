/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:15:49 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:23:23 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, uint8_t gradeToSign, uint8_t gradeToExec) 
	: _name(name)
	, _isSigned(0)
	, _gradeToSign(gradeToSign)
	, _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const &obj)
	: _name(obj.getName())
	, _isSigned(obj.getIsSigned())
	, _gradeToSign(obj.getGradeToSign())
	, _gradeToExec(obj.getGradeToExec()) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &rhs) {
	
	if (this != &rhs)
		_isSigned = rhs.getIsSigned();
	return (*this);
}

std::string	AForm::getName() const { return (_name); }

bool		AForm::getIsSigned() const { return (_isSigned); }

uint8_t		AForm::getGradeToSign() const { return (_gradeToSign); }

uint8_t		AForm::getGradeToExec() const { return (_gradeToExec); }

void		AForm::beSigned(Bureaucrat bureaucrat) {
	if (bureaucrat.getGrade() > getGradeToSign()) {
		throw AForm::GradeTooLowException();
	}
	_isSigned = 1;
}

std::ostream	&operator<<(std::ostream &os, AForm &obj) {
	os	<< "Form       " 
		<< obj.getName()
		<< (!obj.getIsSigned() ? " is not signed, " : " is signed, ")
		<< "Bureaucrat need grade " << (int)obj.getGradeToSign()
		<< " For sign it, and grade " << (int)obj.getGradeToExec()
		<< " for execute it" << std::endl;
	return (os);
}

std::string		AForm::GradeTooHighException::tooHigh() const throw() {
	return ("Form grade is too high");
}

std::string		AForm::GradeTooLowException::tooLow() const throw() {
	return ("Form grade is too low");
}

std::string		AForm::FormIsNotSigned::notSigned() const throw() {
	return ("Form is not signed");
}

bool	AForm::execute(Bureaucrat &executor) const {
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooHighException();
	else if (!this->getIsSigned())
		throw FormIsNotSigned();
	return (1);
}