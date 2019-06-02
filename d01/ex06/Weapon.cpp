/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:46 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:48 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str): _type(str)
{
	return ;
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}

const std::string &Weapon::getType()
{
	return (this->_type);
}

Weapon::~Weapon(void)
{
	return ;
}
