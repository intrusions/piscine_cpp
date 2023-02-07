/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:43:51 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/07 02:24:58 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        std::string     _target;
        
    public:
        PresidentialPardonForm(std::string _target);
		virtual ~PresidentialPardonForm();

        void	execute(Bureaucrat &bureaucrat) const;
};
