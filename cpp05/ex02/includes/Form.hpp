/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:16:04 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:25:03 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const uint8_t		_gradeToSign;
		const uint8_t		_gradeToExec;

	public:
		Form(std::string _name, uint8_t _gradeToSign, uint8_t _gradeToExec);
		virtual ~Form();

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

		// virtual void	execute(Bureaucrat &bureaucrat) const;
		void			executeCheck(Bureaucrat const &executor) const;		
};

std::ostream	&operator<<(std::ostream &os, Form &obj);

/*
	Fonction virtual execute() dans bureaucrat non definie
	Cette fonction est declarer et definie dans chaque sous classe
	elle apelle a chaque fois la fonction executeCheck() qui se trouve dans formulaire
	elle execute a la suite les action demander pour chaque action
	la fonction executeCheck verifie que le form est bien signer
	et que le bureaucrat a le rang necessaire pour l'execution, si ce n'est
	pas le cas, elle jettre la throw de Form associer a l'erreur en question

*/