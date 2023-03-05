/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:11:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:11:02 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string     _target;
		
	public:
		ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm  &operator=(ShrubberyCreationForm const &rhs);

		bool	execute(Bureaucrat &bureaucrat) const;
};
