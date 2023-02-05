/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat2.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:52:09 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/04 19:42:59 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include <exception>
#include "Form.hpp"

class Bureaucrat {
	private:
		const std::string   name;
		uint8_t				grade;
	
	public:
		Bureaucrat(const std::string name, uint8_t grade);
		~Bureaucrat();

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

		bool			signForm(Form &form);

};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj);
