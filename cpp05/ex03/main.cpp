/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:37:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:40:30 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main() {

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
		Bureaucrat	a("Julien", 1);
		Intern		b;

		AForm *newForm = b.makeForm("wtf", "hello");
		(void)newForm;
	}
}
