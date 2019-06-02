/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:36:12 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 10:36:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	tim = Pony("TIM", "purple");
	std::cout << "\tHello, my name is " << tim.getName() << ". I am " 
	<< tim.getColor() << "." << std::endl << "\tI live on the stack." << std::endl;
}

void	ponyOnTheHeap(void)
{
	Pony*	bob = new Pony("BOB", "yellow");
	std::cout << "\tHello, my name is " << bob->getName() << ". I am " 
	<< bob->getColor() << "." << std::endl << "\tI live on the heap." << std::endl;
	delete bob;
}

int		main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
