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

int main ( void )
{
	try{
		Bureaucrat    bear ("Teddy", -10);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
    
    try{
		Bureaucrat    bear ("Teddy", 151);
    }
	catch (std::exception &e){
        std::cout << e.what() << std::endl;
	}
    
    Bureaucrat    bear ("Teddy", 150);
    std::cout << bear << std::endl;
	
	try{
		bear.decrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	bear.setGrade(1);
	std::cout << bear << std::endl;
	try{
		bear.incrementGrade();
		std::cout << bear << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
