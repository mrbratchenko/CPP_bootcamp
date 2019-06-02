/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant ( void ): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const &src )
{
	*this = src;
	return ;
}

SuperMutant &SuperMutant::operator=( SuperMutant const &src )
{
	this->type = src.type;
	this->HP = src.HP;
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage > 0)
		this->HP = this->HP - (damage - 3);
	return;
	
}

SuperMutant::~SuperMutant ( void )
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}
