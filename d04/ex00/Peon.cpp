/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon ( void ): Victim("peon")
{
	return ;
}

Peon::Peon ( std::string name ): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon( Peon const &src )
{
	*this = src;
	return ;
}

Peon &Peon::operator=( Peon const &src )
{
	this->_name = src._name;
	return *this;
}


void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
	return ;
}


Peon::~Peon ( void )
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}
