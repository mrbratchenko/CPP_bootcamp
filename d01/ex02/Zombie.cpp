/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:55:56 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 12:55:58 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
	std::cout << "Zombie " << this->_name << " is born!" << std::endl;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << "< " << this->_name << " ( " << this->_type << " )" << " >" << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " has died!" << std::endl;
	return ;
}
