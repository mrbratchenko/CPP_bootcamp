/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pigeon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pigeon.hpp"

Pigeon::Pigeon ( void ): Victim("pigeon")
{
	return ;
}

Pigeon::Pigeon ( std::string name ): Victim(name)
{
	std::cout << "Guli guli." << std::endl;
	return ;
}

Pigeon::Pigeon( Pigeon const &src )
{
	*this = src;
	return ;
}

Pigeon &Pigeon::operator=( Pigeon const &src )
{
	this->_name = src._name;
	return *this;
}


void Pigeon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a 42 school student !" << std::endl;
	return ;
}


Pigeon::~Pigeon ( void )
{
	std::cout << "Oh no, I'm dead!.." << std::endl;
	return ;
}
