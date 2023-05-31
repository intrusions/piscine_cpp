/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:37:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/05/29 20:15:42 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		Bureaucrat c("Julien", 48);
		std::cout << c << std::endl;

		Form d("Form_D", 50, 50);
		std::cout << d << std::endl;

		c.signForm(d);
		std::cout << d << std::endl;

	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err ) {
		std::cout << err.tooLow() << std::endl;
	}

	std::cout << "---------------------------" << std::endl;
	try {
		Bureaucrat c("Carl", 50);
		std::cout << c << std::endl;

		Form d("Form_D", 40, 40);
		std::cout << d << std::endl;

		c.signForm(d);
		std::cout << d << std::endl;

	} catch (const Bureaucrat::GradeTooHighException &err ) {
		std::cout << err.tooHigh() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &err ) {
		std::cout << err.tooLow() << std::endl;
	}
}
