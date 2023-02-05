/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:37:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/05 22:52:00 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() {
	try {
		Bureaucrat c("Julien", 4);
		std::cout << c << std::endl;

		PresidentialPardonForm d("Sylvain");
		std::cout << d << std::endl;

		// d.beSigned(c);
		std::cout << d << std::endl;

		d.execute(c);

	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err ) {
		std::cout << err.tooLow() << std::endl;
	} catch (const Form::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Form::GradeTooLowException &err ) {
		std::cout << err.tooLow() << std::endl;
	}
}