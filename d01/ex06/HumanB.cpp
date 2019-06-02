/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:46 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:48 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "HumanB " << this->_name << " entered the game" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &n)
{
	this->_wepPnt = &n;
}

void  HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_wepPnt->getType() << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " left the game" << std::endl;
	return ;
}
