/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:00:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 05:24:17 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, uint8_t grade) : name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj) {
	os	<< "Bureaucrat "
		<< obj.getName()
		<< " grade "
		<< (int)obj.getGrade();
	return (os);
}

std::string		Bureaucrat::GradeTooHighException::tooHigh() const throw() {
	return ("Bureaucrat grade is too high");
}

std::string		Bureaucrat::GradeTooLowException::tooLow() const throw() {
	return ("Bureaucrat grade is too low");
}

std::string		Bureaucrat::getName() const {
	return (this->name);
}

uint8_t		Bureaucrat::getGrade() const {
	return (this->grade);
}

void		Bureaucrat::incrementGrade() {
	if (this->grade == 1)
		throw GradeTooHighException();
	this->grade--;
	return ;
}

void		Bureaucrat::decrementGrade() {
	if (this->grade == 150)
		throw GradeTooLowException();
	this->grade++;
	return ;
}
