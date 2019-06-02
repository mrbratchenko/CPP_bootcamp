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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ( void )
{
	Bureaucrat highGrade( "HighGrade", 5 );
	std::cout << highGrade << std::endl;
	Bureaucrat lowGrade( "LowGrade", 145 );
	std::cout << lowGrade << std::endl;
	PresidentialPardonForm presForm( "Pres" );
	std::cout << presForm << std::endl;
	RobotomyRequestForm roboForm( "Robo" );
	std::cout << roboForm << std::endl;
	ShrubberyCreationForm shrubForm( "Shrub" );
	std::cout << shrubForm << std::endl;
	
	highGrade.executeForm(presForm);
	lowGrade.executeForm(roboForm);

	highGrade.signForm(presForm);
	highGrade.signForm(roboForm);
	highGrade.signForm(shrubForm);

	// try{
		lowGrade.executeForm(presForm);
		lowGrade.executeForm(roboForm);
		lowGrade.executeForm(shrubForm);
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }

	try{
		highGrade.executeForm(presForm);
		highGrade.executeForm(roboForm);
		highGrade.executeForm(shrubForm);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
