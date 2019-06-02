/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character ()
{
	this->AP = 40;
	this->weapon = NULL;
	return ;
}

Character::Character( std::string const & name ): name(name)
{
	this->AP = 40;
	this->weapon = NULL;
	return;
}


Character::Character( Character const &src )
{
	*this = src;
	return ;
}

Character &Character::operator=( Character const &src )
{
	this->name = src.name;
	this->AP = src.AP;
	this->weapon = src.weapon;
	return *this;
}

void Character::recoverAP( void )
{
	this->AP += 10;
	this->AP > 40 ? this->AP = 40 : 0;
}

void Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
	return;
}

void Character::attack(Enemy* enemy)
{
	if (this->getWeapon() && (enemy->getHP() > 0))
	{
		if (this->getAP() - this->weapon->getAPCost() >= 0)
		{
			std::cout << this->name <<" attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
			this->weapon->attack();
			enemy->takeDamage(this->weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
			this->AP -= this->weapon->getAPCost();
		}
		else
			std::cout << "* Need more AP to use this weapon! *" << std::endl;
	}
	else
		std::cout << "* This one's already dead! *" << std::endl;
	return;
}

std::string Character::getName() const
{
	return this->name;
}

int Character::getAP() const
{
	return this->AP;
}

AWeapon * Character::getWeapon() const
{
	return this->weapon;
}

std::ostream &operator<<(std::ostream &o , Character const & src)
{
	if (src.getWeapon())
    	o << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
    else
    	o << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
    return o;
}

Character::~Character ( void )
{
	return ;
}
