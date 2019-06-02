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
#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde horde = ZombieHorde(10);
	horde.announce();
	return (0);
}
