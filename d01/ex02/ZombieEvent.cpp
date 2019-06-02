/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:56:25 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 12:56:27 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(std::string type): _new_type(type)
{
	srand(time(0));
	std::cout << "ZombieEvent created!" << std::endl;
	return ;
}

void		ZombieEvent::setZombieType(std::string str)
{
	this->_new_type = str;
	return ;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* newZomb = new Zombie(name, this->_new_type);
	return (newZomb);
}

Zombie*		ZombieEvent::randomChump()
{
	std::string names[5] = {"Slavik", "Serioga", "Andriuha", "Nadia", "Tania"};
	Zombie* newZomb = new Zombie(names[rand() % 5], this->_new_type);
	newZomb->announce();
	return (newZomb);
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent destroyed!" << std::endl;
	return ;
}
