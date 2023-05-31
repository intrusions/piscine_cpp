/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:37:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/31 17:53:19 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main() {
	
	std::cout << "---------------------------------" << std::endl;
	{
		Bureaucrat	a("BOSS", 1);
		Intern		b;

		AForm *newForm = b.makeForm("shrubbery creation", "hello");

		a.signForm(*newForm);
		a.executeForm(*newForm);
		delete newForm;
	}


	std::cout << "---------------------------------" << std::endl;
	{
		Bureaucrat	a("BOSS", 1);
		Intern		b;

		AForm *newForm = b.makeForm("creation", "hello");
		(void)newForm;
	}

	std::cout << "---------------------------------" << std::endl;
	{
		Bureaucrat	a("BOSS", 1);
		Intern		b;

		AForm *newForm = b.makeForm("robotomy request", "Bender");

		a.signForm(*newForm);
		a.executeForm(*newForm);
		delete newForm;
	}
}
