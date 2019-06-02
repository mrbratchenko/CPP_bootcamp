/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:56:33 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 12:56:34 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
	private:
		int			_num;
		Zombie		*_zombies;
	public:
		void		announce();
		ZombieHorde(int N);
		~ZombieHorde(void);
};

#endif
