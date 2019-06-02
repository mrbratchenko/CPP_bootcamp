/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Bureaucrat;
class Form;

class Intern
{
	

	public:
		
		Intern( void );
		Intern( Intern const &src );
		~Intern( void );

		Intern &operator=( Intern const &object );

		Form* makeForm(std::string formName, std::string formTarget );

		typedef Form * (Intern::*FormPtr)(std::string );

	private:

		std::string formNames[3];
		FormPtr functions[3];

    	Form*	presidentialForm(std::string target);
    	Form*	robotomyForm(std::string target);
    	Form*	shrubberyForm(std::string target);


};

#endif
