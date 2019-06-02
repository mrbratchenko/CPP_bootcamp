/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, NinjaTrap
{
	
	public:
		SuperTrap( void );
		SuperTrap( SuperTrap const &src );
		SuperTrap( std::string name );
		~SuperTrap( void );

		SuperTrap &operator=( SuperTrap const &object );

		void			rangedAttack( std::string const &target );
		void			meleeAttack( std::string const &target );

};

#endif
