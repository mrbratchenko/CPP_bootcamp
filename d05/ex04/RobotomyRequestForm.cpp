/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm ( void ) : Form( "RobotomyRequestForm" , 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm ( std::string target ) : Form( "RobotomyRequestForm" , 72, 45)
{
	srand(time(0));
	this->setTarget(target);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src ) : Form( "RobotomyRequestForm" , 72, 45)
{
	*this = src;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const & )
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm ( void )
{
	return ;
}

void RobotomyRequestForm::action ( void ) const
{
	int i = rand() % 2;
	std::cout << "Drrrrrrr........Drrrrrrrrr........" << std::endl;
	if (i == 0)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->getTarget() << " failed to robotomize." << std::endl;
	return ;
}
