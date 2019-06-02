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

int main ( void )
{
	Intern  salaga;
	Form* formA; 
	formA = salaga.makeForm("presidential", "Bender");
	Form* formB; 
	formB = salaga.makeForm("robotomy", "Sender");
	Form* formC; 
	formC = salaga.makeForm("shrubbery", "Lender");
	Form* formD; 
	formD = salaga.makeForm("raspberry", "Lender");

	return (0);
}
