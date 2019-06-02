/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:46 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:48 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
#include <iostream>
#include <string>
#include <sstream>
#include "Weapon.hpp"

class HumanA
{
	private:
		
		std::string	_name;
		Weapon &_wepRef;
	
	public:
		void attack(void);
		
		HumanA(std::string, Weapon &_wepRef);
		~HumanA(void);
};
#endif
