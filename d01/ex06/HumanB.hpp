/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:46 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:48 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
#include <iostream>
#include <string>
#include <sstream>
#include "Weapon.hpp"

class HumanB
{
	private:
		
		std::string	_name;
		Weapon *_wepPnt;
	
	public:
		void attack(void);
		void setWeapon(Weapon &wep);
		
		HumanB(std::string);
		~HumanB(void);
};

#endif
