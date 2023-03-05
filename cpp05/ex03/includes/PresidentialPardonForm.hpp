/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:43:51 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/06 00:22:45 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string     _target;
        
    public:
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(PresidentialPardonForm const &obj);
		virtual ~PresidentialPardonForm();

        PresidentialPardonForm  &operator=(PresidentialPardonForm const &rhs);

        bool	execute(Bureaucrat &bureaucrat) const;
};
