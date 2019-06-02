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

ScavTrap::ScavTrap ( void ) : ClapTrap()
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

ScavTrap::ScavTrap( ScavTrap const &src ) : ClapTrap(src)
{
	srand(time(0));
	std::cout << "A new copy of ScavTrap is born!" << std::endl;
	*this = src;
	return ;
}

ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name)
{
	srand(time(0));
	std::cout << "A new ScavTrap " << this->_Name << " is born!" << std::endl;
	this->_Name = name;
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
