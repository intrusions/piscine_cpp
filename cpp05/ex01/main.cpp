/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:37:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 20:31:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		Bureaucrat c("Julien", 52);
		std::cout << c << std::endl;

		Form d("Form_D", 50, 50);
		std::cout << d << std::endl;

		d.beSigned(c);
		std::cout << d << std::endl;

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
