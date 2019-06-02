/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist (): AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist( PowerFist const &src )
{
	*this = src;
	return ;
}

PowerFist &PowerFist::operator=( PowerFist const &src )
{
	this->name = src.name;
	this->apcost = src.apcost;
	this->damage = src.damage;
	return *this;
}

void PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
	
}

PowerFist::~PowerFist ( void )
{
	return ;
}
