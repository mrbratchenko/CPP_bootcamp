/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( void ) : Form( "PresidentialPardonForm" , 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm ( std::string target ) : Form( "PresidentialPardonForm" , 25, 5)
{
	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src ) : Form( "PresidentialPardonForm" , 25, 5 )
{
	*this = src;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & )
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm ( void )
{
	return ;
}

void PresidentialPardonForm::action ( void )  const
{
	
	std::cout << this->getTarget() << " has been  pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}
