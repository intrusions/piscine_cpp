/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 03:59:56 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/16 23:38:22 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private:


	public:
		Intern();
		Intern(Intern const &obj);
		virtual ~Intern();

		// Intern	&operator=(Intern const &obj);
		Form	*makeForm(std::string formName, std::string FormTarget);

};
