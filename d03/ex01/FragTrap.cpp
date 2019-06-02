/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ( void )
{
	srand(time(0));
	std::cout << "A new FragTrap is born!" << std::endl;
	this->_Name = "FR4G-TP";
	this->_HitPoints = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 100;
	this->_MaxEnergyPoints = 100;
 	this->_Level = 1;
	this->_MeleeAttackDamage = 30; 
	this->_RangedAttackDamage = 20; 
	this->_ArmorDamageReduction = 5;
	return ;
}

FragTrap::FragTrap( FragTrap const &src )
{
	std::cout << "A new copy of FragTrap is born!" << std::endl;
	*this = src;
	return ;
}

FragTrap::FragTrap ( std::string name ): _Name(name)
{
	std::cout << "A new FragTrap " << this->_Name << " is born!" << std::endl;
	this->_HitPoints = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 100;
	this->_MaxEnergyPoints = 100;
 	this->_Level = 1;
	this->_MeleeAttackDamage = 30; 
	this->_RangedAttackDamage = 20; 
	this->_ArmorDamageReduction = 5;
	return ;
}

FragTrap &FragTrap::operator=( FragTrap const &src )
{
	std::cout << "FragTrap Assignation completed" << std::endl;
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

FragTrap::~FragTrap ( void )
{
	std::cout << "FragTrap has died!" << std::endl;
	return ;
}

void FragTrap::setName (std::string name)
{
	this->_Name = name;
	return ;
}

std::string		FragTrap::getName (void)
{
	return this->_Name;
}

unsigned int	FragTrap::getRaDamage(void)
{
	return this->_RangedAttackDamage;
}

unsigned int	FragTrap::getMaDamage(void)
{
	return this->_MeleeAttackDamage;
}

void FragTrap::rangedAttack( std::string const &target )
{
	std::cout << "FR4G-TP " << this->_Name <<
	" attacks " << target << " at range, causing " << 
	this->_RangedAttackDamage << 
	" points of damage !" << std::endl <<
	"[" << this->_Name << "]" << ": Flesh fireworks!" << std::endl;
}

void FragTrap::meleeAttack( std::string const &target )
{
	std::cout << "FR4G-TP " << this->_Name <<
	" attacks " << target <<
	" at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage !" << std::endl <<
	"[" << this->_Name << "]" << ": Meat confetti!" << std::endl;
}

void FragTrap::takeDamage( unsigned int amount )
{
	if (this->_HitPoints >= 5)
		this->_HitPoints = this->_HitPoints - amount + this->_ArmorDamageReduction;
	if (this->_HitPoints < 0)
		this->_HitPoints = 0;
	std::cout << "FR4G-TP " << this->_Name <<
	" is attacked" <<
	" and looses " << amount <<
	" health points !" << std::endl <<
	"[" << this->_Name << "]";
	if (this->_HitPoints > 0)
		std::cout << ": Why do I even feel pain?!" << std::endl;
	else
		std::cout << ": Oh no! I'm dead!" << std::endl;
}

void FragTrap::beRepaired( unsigned int amount )
{
	this->_HitPoints += amount;
	if (this->_HitPoints > this->_MaxHitPoints)
		this->_HitPoints = this->_MaxHitPoints;
	std::cout << "FR4G-TP " << this->_Name <<
	" is repaired" <<
	" and gains " << amount <<
	" health points !" << std::endl <<
	"[" << this->_Name << "]" << ": Health! Eww, what flavor is red?" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[5] = {"Defragmenting ", 
							"Running the sequencer on ", 
							"Let's get this party started with ", 
							"Resequencing combat protocols of ", 
							"I'm pulling tricks outta my hat for "};
	if (this->_EnergyPoints >= 25)
	{
		std::cout << "[" << this->_Name << "]: " << attacks[rand() % 5] << target << std::endl;
		this->_EnergyPoints -= 25;
	}
	else
		std::cout << "[" << this->_Name << "]: " << "Oh no! I'm out of energy!" << std::endl;
}
