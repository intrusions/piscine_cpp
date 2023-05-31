/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 03:59:53 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/31 17:50:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {};

Intern::Intern(Intern const &obj) { *this = obj; }

Intern::~Intern() {};

Intern		&Intern::operator=(Intern const &rhs) { (void)rhs; return (*this); }

static AForm *newShrubbery(std::string formTarget) { return (new ShrubberyCreationForm(formTarget)); }

static AForm *newRobotomy(std::string formTarget) { return (new RobotomyRequestForm(formTarget)); }

static AForm *newPresidential(std::string formTarget) { return (new PresidentialPardonForm(formTarget)); }

static int8_t		whatForm(std::string FormName) {
	
	int8_t	id = -1;
	std::string	formNameList[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	for (uint8_t i = 0; i < 3; i++)
		if (formNameList[i] == FormName)
			id = i;
	
	return (id);
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget) {

	AForm *(*f[3])(std::string formTarget) = { 
		&newShrubbery,
		&newRobotomy,
		&newPresidential
	};
	
	int16_t id = whatForm(formName);
	AForm *newForm = NULL;

	if (id != -1) {
		newForm = f[id](formTarget);
		
		std::cout	<< "Intern creates : "
					<< newForm->getName()
					<< std::endl;
	} else {
		std::cout	<< "Invalid FormName"
					<< std::endl;
	}

	return(newForm);
}
