/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:00:31 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/05 22:25:30 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, uint8_t grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
	: _name(obj.getName())
	, _grade(obj.getGrade()) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << "Bureaucrat asignement constructor called" << std::endl;

	if (this != &rhs) {
		_grade = rhs._grade;
	}
	return (*this);
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

std::string		Bureaucrat::getName() const { return (_name); }

uint8_t			Bureaucrat::getGrade() const { return (_grade); }

void		Bureaucrat::incrementGrade() {
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
	return ;
}

void		Bureaucrat::decrementGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
	return ;
}

void		Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
	} catch(const std::exception &err) {
		std::cout 	<< this->getName()
					<< " couldn't signed "
					<< form.getName()
					<< " because form grade is too high"
					<< std::endl;
		return ;
	}
	std::cout 	<< this->getName()
				<< " signed "
				<< form.getName()
				<< std::endl;
}

void		Bureaucrat::executeForm(AForm const &form) {
	if (form.execute(*this)) {
		std::cout	<< getName()
					<< " executed "
					<< form.getName()
					<< std::endl;
	} else {
		std::cout	<< std::endl
					<< getName()
					<< " can't execute "
					<< form.getName()
					<< std::endl;
	}
}