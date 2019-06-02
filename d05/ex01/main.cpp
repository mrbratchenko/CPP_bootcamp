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

int main ( void )
{
	try{
		Form form_A( "Form_A", 0, 5);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Form form_B( "Form_B", 170, 5);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	Bureaucrat bear ("Teddy", 60);
    std::cout << bear << std::endl;

    Form form_C( "Form_C", 50, 50);
	std::cout << form_C << std::endl;
	try{
		bear.signForm(form_C);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	bear.setGrade(20);
	std::cout << bear << std::endl;
	try{
		Form form_D( "Form_D", 50, 50);
		bear.signForm(form_D);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
