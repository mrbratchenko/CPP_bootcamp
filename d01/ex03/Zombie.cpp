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

Zombie::Zombie(void)
{
	std::cout << "Zombie is born!" << std::endl;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << "< " << this->name << " ( " << this->type << " ) " << ">" << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie has died!" << std::endl;
	return ;
}
