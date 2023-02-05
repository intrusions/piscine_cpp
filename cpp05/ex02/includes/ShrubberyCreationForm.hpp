/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:11:37 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/05 22:38:05 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string     target;
		
	public:
		ShrubberyCreationForm(std::string _target);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat &bureaucrat) const;
};
