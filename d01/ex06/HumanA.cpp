/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:46 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:48 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep): _name(name), _wepRef(wep)
{
	std::cout << "HumanA " << this->_name << " entered the game" << std::endl;
	return ;
}

void  HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_wepRef.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name << " left the game" << std::endl;
	return ;
}
