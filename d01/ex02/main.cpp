/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:55:32 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 12:55:34 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie a = Zombie("Slavik", "The Hive");
	a.announce();
	
	ZombieEvent event = ZombieEvent("The Union");
	
	Zombie *b;
	b = event.newZombie("Serioga");
	b->announce();
	delete b;

	event.setZombieType("The Alliance");

	Zombie *c;
	c = event.newZombie("Tania");
	c->announce();
	delete c;

	Zombie *d;
	d = event.randomChump();

	Zombie *e;
	e = event.randomChump();

	delete d;
	delete e;
	return (0);
}
