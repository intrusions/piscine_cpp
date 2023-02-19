/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:11:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:24:47 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string     _target;
		
	public:
		ShrubberyCreationForm(std::string _target);
		virtual ~ShrubberyCreationForm();

		void	execute(Bureaucrat &bureaucrat) const;
};
