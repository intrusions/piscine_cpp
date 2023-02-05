/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:43:51 by jucheval          #+#    #+#             */
/*   Updated: 2023/02/05 22:38:10 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        std::string     target;
        
    public:
        PresidentialPardonForm(std::string _target);
		~PresidentialPardonForm();

        void	execute(Bureaucrat &bureaucrat) const;
};
