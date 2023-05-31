/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:37:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/29 20:05:44 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat a("John Doe", 155);
		std::cout << a << std::endl;
	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err ) {
		std::cout << err.tooLow() << std::endl;
	}

	try {
		Bureaucrat b("Julien", 0);
		std::cout << b << std::endl;
	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err) {
		std::cout << err.tooLow() << std::endl;
	}

	try {
		Bureaucrat c("Carl", 150);
		std::cout << c << std::endl;
	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err) {
		std::cout << err.tooLow() << std::endl;
	}

	try {
		Bureaucrat d("Sylvain", 150);
		d.decrementGrade();
		std::cout << d << std::endl;
	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err) {
		std::cout << err.tooLow() << std::endl;
	}

	try {
		Bureaucrat e("Alex", 1);
		e.incrementGrade();
		std::cout << e << std::endl;
	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err) {
		std::cout << err.tooLow() << std::endl;
	}
	return 0;
}