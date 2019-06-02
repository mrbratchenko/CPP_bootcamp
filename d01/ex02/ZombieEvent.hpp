/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:56:33 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 12:56:34 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string		_new_type;
	public:
		ZombieEvent(std::string);
		~ZombieEvent(void);
		void		setZombieType(std::string str);
		Zombie*		newZombie(std::string name);
		Zombie*		randomChump();
};

#endif
