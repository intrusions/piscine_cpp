/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 03:59:56 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:40:54 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private:


	public:
		Intern();
		Intern(Intern const &obj);
		virtual ~Intern();

		Intern	&operator=(Intern const &obj);
		AForm	*makeForm(std::string formName, std::string FormTarget);

};
