/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void )
{
	srand(time(0));
	std::cout << "A new ScavTrap is born!" << std::endl;
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

ScavTrap::ScavTrap( ScavTrap const &src )
{
	srand(time(0));
	std::cout << "A new copy of ScavTrap is born!" << std::endl;
	*this = src;
	return ;
}

ScavTrap::ScavTrap ( std::string name ): _Name(name)
{
	srand(time(0));
	std::cout << "A new ScavTrap " << this->_Name << " is born!" << std::endl;
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

ScavTrap &ScavTrap::operator=( ScavTrap const &src )
{
	std::cout << "ScavTrap Assignation completed" << std::endl;
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

ScavTrap::~ScavTrap ( void )
{
	std::cout << "ScavTrap has died!" << std::endl;
	return ;
}

void ScavTrap::setName (std::string name)
{
	this->_Name = name;
	return ;
}

std::string		ScavTrap::getName (void)
{
	return this->_Name;
}

unsigned int	ScavTrap::getRaDamage(void)
{
	return this->_RangedAttackDamage;
}

unsigned int	ScavTrap::getMaDamage(void)
{
	return this->_MeleeAttackDamage;
}

void ScavTrap::rangedAttack( std::string const &target )
{
	std::cout << "SC4V-TP " << this->_Name <<
	" attacks " << target << " at range, causing " << 
	this->_RangedAttackDamage << 
	" points of damage !" << std::endl <<
	"[" << this->_Name << "]" << ": Shwing!" << std::endl;
}

void ScavTrap::meleeAttack( std::string const &target )
{
	std::cout << "SC4V-TP " << this->_Name <<
	" attacks " << target <<
	" at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage !" << std::endl <<
	"[" << this->_Name << "]" << ": WOW! I hit 'em!" << std::endl;
}

void ScavTrap::takeDamage( unsigned int amount )
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

void ScavTrap::beRepaired( unsigned int amount )
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

void ScavTrap::challengeNewcomer_dot_exe(std::string const &target)
{
	std::string challenges[5] = {"How about a drinking game with ", 
							"Breakdance time with ", 
							"Let me sing you a song of my people, ", 
							"Let's armwrestle, ", 
							"Race me to that FR4G-TP, "};
	if (this->_EnergyPoints >= 10)
	{
		std::cout << "[" << this->_Name << "]: " << challenges[rand() % 5] << target << std::endl;
		this->_EnergyPoints -= 10;
	}
	else
		std::cout << "[" << this->_Name << "]: " << "Need some energy!" << std::endl;
}
