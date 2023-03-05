/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:16:04 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/05 22:22:04 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_isSigned;
		const uint8_t		_gradeToSign;
		const uint8_t		_gradeToExec;

	public:
		AForm(std::string _name, uint8_t _gradeToSign, uint8_t _gradeToExec);
		AForm(AForm const &obj);
		virtual ~AForm();

		AForm &operator=(const AForm &rhs);

		class GradeTooHighException : public std::exception {
			public:
				std::string		tooHigh() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				std::string		tooLow() const throw();
		};

		class FormIsNotSigned : public std::exception {
			public:
				std::string		notSigned() const throw();
		};

		std::string	getName() const;
		bool		getIsSigned() const;
		uint8_t		getGradeToSign() const;
		uint8_t		getGradeToExec() const;

		void			beSigned(Bureaucrat bureaucrat);

		virtual bool	execute(Bureaucrat &bureaucrat) const = 0;
		void			executeCheck(Bureaucrat const &executor) const;		
};

std::ostream	&operator<<(std::ostream &os, AForm &obj);