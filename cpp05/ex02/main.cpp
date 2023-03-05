/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:37:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/05 22:44:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() {

	// Form a("can't compile", 10, 10);
	
	{
		try {
			Bureaucrat c("Julien", 1);
			std::cout << c << std::endl;

			PresidentialPardonForm d("PPF");
			std::cout << d << std::endl;

			c.signForm(d);
			std::cout << d << std::endl;

			c.executeForm(d);

		} catch (const Bureaucrat::GradeTooHighException &err ) {
			std::cout << err.tooHigh() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &err ) {
			std::cout << err.tooLow() << std::endl;
		}
	}


	std::cout << "-----------------------------------------------" << std::endl;
	{
		try {
			Bureaucrat c("Sylvain", 1);
			std::cout << c << std::endl;

			RobotomyRequestForm d("RBF");
			std::cout << d << std::endl;

			c.signForm(d);
			std::cout << d << std::endl;

			c.executeForm(d);

		} catch (const Bureaucrat::GradeTooHighException &err ) {
			std::cout << err.tooHigh() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &err ) {
			std::cout << err.tooLow() << std::endl;
		}
	}


	std::cout << "-----------------------------------------------" << std::endl;
	{
		try {
			Bureaucrat c("Carl", 1);
			std::cout << c << std::endl;

			ShrubberyCreationForm d("SCF");
			std::cout << d << std::endl;

			c.signForm(d);
			std::cout << d << std::endl;

			c.executeForm(d);

		} catch (const Bureaucrat::GradeTooHighException &err ) {
			std::cout << err.tooHigh() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &err ) {
			std::cout << err.tooLow() << std::endl;
		}
	}
}
