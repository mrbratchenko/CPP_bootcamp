/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:54 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:56 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "OfficeBlock.hpp"

int main ( void )
{
	Intern intern;
	Bureaucrat signing("BOB", 1);
	Bureaucrat executing("JOE", 150);

	OfficeBlock a(&intern, &signing, &executing);
	
	try{
		a.doBureaucracy("shrubbery", "Bender");
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
