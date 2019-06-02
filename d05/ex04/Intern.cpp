/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern ( void )
{
	functions[0] = &Intern::presidentialForm;
	functions[1] = &Intern::robotomyForm;
	functions[2] = &Intern::shrubberyForm;
	formNames[0] = "robotomy";
	formNames[1] = "presidential";
	formNames[2] = "shrubbery";
	return ;
}

Intern::Intern( Intern const &src )
{

	*this = src;
	return ;
}

Intern &Intern::operator=( Intern const & )
{
	return *this;
}

Intern::~Intern ( void )
{
	return ;
}

Form*	Intern::presidentialForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::robotomyForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::shrubberyForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*  Intern::makeForm ( std::string formName, std::string formTarget )
{
	for (int i = 0; i < 3; i++)
	{
		if(formName == this->formNames[i])
		{
			std::cout << "Intern creates " << this->formNames[i] << " form on " << formTarget << std::endl;
			return (this->*(functions[i]))(formTarget);
		}
	}
	std::cout << "Such form is not known." << std::endl;
	return NULL;
}
