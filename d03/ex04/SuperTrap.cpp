/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap ( void ): FragTrap( ), NinjaTrap( )
{
	srand(time(0));
	std::cout << "A new SuperTrap is born!" << std::endl;
	this->_Name = "SC4V-SUP";
	this->_HitPoints = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 50;
	this->_MaxEnergyPoints = 50;
 	this->_Level = 1;
	this->_MeleeAttackDamage = 20; 
	this->_RangedAttackDamage = 20; 
	this->_ArmorDamageReduction = 5;	return ;
}

SuperTrap::SuperTrap( SuperTrap const &src ): FragTrap( src ), NinjaTrap( src )
{
	srand(time(0));
	std::cout << "A new copy of SuperTrap is born!" << std::endl;
	*this = src;
	return ;
}

SuperTrap::SuperTrap ( std::string name ): FragTrap( name ), NinjaTrap( name )
{
	srand(time(0));
	std::cout << "A new SuperTrap " << this->_Name << " is born!" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 50;
	this->_MaxEnergyPoints = 50;
 	this->_Level = 1;
	this->_MeleeAttackDamage = 20; 
	this->_RangedAttackDamage = 20; 
	this->_ArmorDamageReduction = 5;
	return ;
}

SuperTrap &SuperTrap::operator=( SuperTrap const &src )
{
	std::cout << "SuperTrap Assignation completed" << std::endl;
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

SuperTrap::~SuperTrap ( void )
{
	std::cout << "SuperTrap has died!" << std::endl;
	return ;
}

void SuperTrap::rangedAttack( std::string const &target )
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack( std::string const &target )
{
	NinjaTrap::meleeAttack(target);
}
