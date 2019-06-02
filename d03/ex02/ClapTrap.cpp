/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void )
{
	srand(time(0));
	std::cout << "A new ClapTrap is born!" << std::endl;
	this->_Name = "SC4V-TP";
	this->_HitPoints = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 50;
	this->_MaxEnergyPoints = 50;
 	this->_Level = 1;
	this->_MeleeAttackDamage = 20; 
	this->_RangedAttackDamage = 15; 
	this->_ArmorDamageReduction = 3;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
	srand(time(0));
	std::cout << "A new copy of ClapTrap is born!" << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap ( std::string name ): _Name(name)
{
	srand(time(0));
	std::cout << "A new ClapTrap " << this->_Name << " is born!" << std::endl;
	this->_HitPoints = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 50;
	this->_MaxEnergyPoints = 50;
 	this->_Level = 1;
	this->_MeleeAttackDamage = 20; 
	this->_RangedAttackDamage = 15; 
	this->_ArmorDamageReduction = 3;
	return ;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &src )
{
	std::cout << "ClapTrap Assignation completed" << std::endl;
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_MaxHitPoints = src._MaxHitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_MaxEnergyPoints = src._MaxEnergyPoints;
	this->_Level = src._Level;
	this->_MeleeAttackDamage = src._MeleeAttackDamage;
	this->_RangedAttackDamage = src._RangedAttackDamage;
	this->_ArmorDamageReduction = src._ArmorDamageReduction;
	return *this;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << "ClapTrap has died!" << std::endl;
	return ;
}

void ClapTrap::setName (std::string name)
{
	this->_Name = name;
	return ;
}

std::string		ClapTrap::getName (void)
{
	return this->_Name;
}

unsigned int	ClapTrap::getRaDamage(void)
{
	return this->_RangedAttackDamage;
}

unsigned int	ClapTrap::getMaDamage(void)
{
	return this->_MeleeAttackDamage;
}

void ClapTrap::rangedAttack( std::string const &target )
{
	std::cout << "SC4V-TP " << this->_Name <<
	" attacks " << target << " at range, causing " << 
	this->_RangedAttackDamage << 
	" points of damage !" << std::endl <<
	"[" << this->_Name << "]" << ": Shwing!" << std::endl;
}

void ClapTrap::meleeAttack( std::string const &target )
{
	std::cout << "SC4V-TP " << this->_Name <<
	" attacks " << target <<
	" at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage !" << std::endl <<
	"[" << this->_Name << "]" << ": WOW! I hit 'em!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_HitPoints >= 5)
		this->_HitPoints = this->_HitPoints - amount + this->_ArmorDamageReduction;
	if (this->_HitPoints < 0)
		this->_HitPoints = 0;
	std::cout << "SC4V-TP " << this->_Name <<
	" is attacked" <<
	" and looses " << amount <<
	" health points !" << std::endl <<
	"[" << this->_Name << "]";
	if (this->_HitPoints > 0)
		std::cout << ": Ow hohoho, that hurts! Yipes!" << std::endl;
	else
		std::cout << ": Bye bye! I'm gone forever!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	this->_HitPoints += amount;
	if (this->_HitPoints > this->_MaxHitPoints)
		this->_HitPoints = this->_MaxHitPoints;
	std::cout << "SC4V-TP " << this->_Name <<
	" is repaired" <<
	" and gains " << amount <<
	" health points !" << std::endl <<
	"[" << this->_Name << "]" << ": I found health!" << std::endl;
}
