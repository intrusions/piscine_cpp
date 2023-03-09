/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:41:10 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 10:03:32 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <cstdlib>
# include <iostream>
# include <exception>
# include <ctime>

class Base {
	private:

	public:
		virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};
