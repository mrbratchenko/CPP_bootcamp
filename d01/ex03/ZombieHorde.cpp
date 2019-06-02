/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:56:25 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 12:56:27 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N): _num(N)
{
	std::string names[5] = {"Slavik", "Serioga", "Andriuha", "Nadia", "Tania"};
	srand(time(0));
	this->_zombies = new Zombie[this->_num];
	for (int j = 0; j < this->_num; j++)
	{
		this->_zombies[j].name = names[rand() % 4];
		this->_zombies[j].type = "Horde";
	}
	std::cout << "ZombieHorde created!" << std::endl;
	return;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_num; i++)
		this->_zombies[i].announce();
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
	std::cout << "ZombieHorde destroyed!" << std::endl;
	return ;
}
