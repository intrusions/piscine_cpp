/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:15:27 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:20:19 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyForm", 145, 137)
	, _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) 
	: AForm("ShrubberyForm", 145, 137)
	, _target(obj._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

bool	ShrubberyCreationForm::execute(Bureaucrat &bureaucrat) const {
	try {
		AForm::execute(bureaucrat);
		
		std::ofstream	outFile((_target + "_shruberry").c_str());


		outFile << "      /\\      "		<< std::endl;
		outFile << "     /\\*\\     "		<< std::endl;
		outFile << "    /\\O\\*\\    "		<< std::endl;
		outFile << "   /*/\\/\\/\\   "		<< std::endl;
		outFile << "  /\\O\\/\\*\\/\\  "	<< std::endl;
		outFile << " /\\*\\/\\*\\/\\/\\ "	<< std::endl;
		outFile << "/\\O\\/\\/*/\\/O/\\"	<< std::endl;
		outFile << "      ||      "			<< std::endl;
		outFile << "      ||      "			<< std::endl;
		outFile << "      ||      "			<< std::endl;
		
		
		return (1);
	} catch(AForm::GradeTooHighException &err) {
		std::cout << err.tooHigh();
	} catch(AForm::FormIsNotSigned &err) {
		std::cout << err.notSigned();
	}
	return (0);
}
