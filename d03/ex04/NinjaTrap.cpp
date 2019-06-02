/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap ( void )
{
	srand(time(0));
	std::cout << "A new NinjaTrap is born!" << std::endl;
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

NinjaTrap::NinjaTrap( NinjaTrap const &src ) 
{
	srand(time(0));
	std::cout << "A new copy of NinjaTrap is born!" << std::endl;
	*this = src;
	return ;
}

NinjaTrap::NinjaTrap ( std::string name )  
{
	srand(time(0));
	std::cout << "A new NinjaTrap " << this->_Name << " is born!" << std::endl;
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

NinjaTrap &NinjaTrap::operator=( NinjaTrap const &src )
{
	std::cout << "NinjaTrap Assignation completed" << std::endl;
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

NinjaTrap::~NinjaTrap ( void )
{
	std::cout << "NinjaTrap has died!" << std::endl;
	return ;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "NinjaTrap " << this->_Name << " attacks " << target.getName() <<
	" with a special attack." << std::endl <<
	"[" << this->_Name << "]: Hyah, ClapTrap!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "NinjaTrap " << this->_Name << " attacks " << target.getName() << 
	" with a special attack." << std::endl <<
	"[" << this->_Name << "]: You are the best!" << std::endl;

}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "NinjaTrap " << this->_Name << " attacks " << target.getName() << 
	" with a special attack." << std::endl <<
	"[" << this->_Name << "]: Take that, ScavTrap!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "NinjaTrap " << this->_Name << " attacks " << target.getName() << 
	" with a special attack." << std::endl <<
	"[" << this->_Name << "]: Heyyah, ScavTrap!" << std::endl;
}

void NinjaTrap::rangedAttack( std::string const &target )
{
	std::cout << "NinjaTrap's rangedAttack called on " << target << std::endl;
}

void NinjaTrap::meleeAttack( std::string const &target )
{
	std::cout << "NinjaTrap's meleeAttack called on " << target << std::endl;
}