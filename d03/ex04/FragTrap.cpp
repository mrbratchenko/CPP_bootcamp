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

FragTrap::FragTrap ( std::string name ) 
{
	std::cout << "A new FragTrap " << this->_Name << " is born!" << std::endl;
	this->_Name = name;
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

void FragTrap::rangedAttack( std::string const &target )
{
	std::cout << "FragTrap's rangedAttack called on " << target << std::endl;
}

void FragTrap::meleeAttack( std::string const &target )
{
	std::cout << "FragTrap's meleeAttack called on " << target << std::endl;
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
