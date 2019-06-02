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

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Pigeon.hpp"

int main( void ) 
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
	Peon joe("Joe");
	Pigeon bob("Bobby");
	std::cout << robert << jim << joe << bob;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bob);
	return 0; 
}

