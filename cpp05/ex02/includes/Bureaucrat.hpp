/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:52:09 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/05 22:21:39 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		const std::string   _name;
		uint8_t				_grade;
	
	public:
		Bureaucrat(const std::string name, uint8_t grade);
		Bureaucrat(Bureaucrat const &obj);
		virtual ~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &rhs);

		class GradeTooHighException : public std::exception {
			public:
				std::string		tooHigh() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				std::string		tooLow() const throw();
		};

		std::string		getName() const;
		uint8_t			getGrade() const;

		void			incrementGrade();
		void			decrementGrade();

		void			signForm(AForm &form);

		void			executeForm(AForm const &form);

};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj);
