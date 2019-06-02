/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:36 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:38 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main() 
{
       	Character* zaz = new Character("zaz");
      	std::cout << *zaz;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->equip(pf);
		zaz->attack(b);
		std::cout << "RadScorpion's health: " << b->getHP() << std::endl;
		std::cout << *zaz;
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;

		
		zaz->recoverAP();
		std::cout << *zaz;
		zaz->recoverAP();
		std::cout << *zaz;

		Enemy* c = new SuperMutant();
		Enemy* d = new RadScorpion();
		zaz->attack(c);
		std::cout << *zaz;
		std::cout << "SuperMutant's health: " << c->getHP() << std::endl;
		zaz->equip(pf);
		std::cout << *zaz;
		zaz->attack(c);
		zaz->attack(c);
		zaz->attack(c);
		zaz->attack(c);
		std::cout << *zaz;
		zaz->attack(d);
		zaz->recoverAP();
		zaz->recoverAP();
		zaz->attack(d);
		zaz->attack(b);

		return 0; 
}