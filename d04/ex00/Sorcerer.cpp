/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer ( void ): _name("sorcerer"), _title("title")
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer ( std::string name, std::string title ): _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const &src )
{
	*this = src;
	return ;
}

Sorcerer &Sorcerer::operator=( Sorcerer const &src )
{
	this->_name = src._name;
	this->_title = src._title;
	return *this;
}

std::ostream &operator<<(std::ostream &o , Sorcerer const & src)
{
    o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

std::string Sorcerer::getName( void ) const
{
	return this->_name;
}

std::string Sorcerer::getTitle( void ) const
{
	return this->_title;
}

void Sorcerer::polymorph(Victim const & src) const
{
 	src.getPolymorphed();
 	return;
}

Sorcerer::~Sorcerer ( void )
{
	std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same !" << std::endl;
	return ;
}
