/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon ()
{
	return ;
}

AWeapon::AWeapon ( std::string const & name, int apcost, int damage ): name(name), apcost(apcost), damage(damage)
{
	return ;
}

AWeapon::AWeapon( AWeapon const &src )
{
	*this = src;
	return ;
}

AWeapon &AWeapon::operator=( AWeapon const &src )
{
	this->name = src.name;
	this->apcost = src.apcost;
	this->damage = src.damage;
	return *this;
}

std::string AWeapon::getName() const
{
	return this->name;
}

int AWeapon::getAPCost() const
{
	return this->apcost;
}

int AWeapon::getDamage() const
{
	return this->damage;
}

AWeapon::~AWeapon ( void )
{
	return ;
}
