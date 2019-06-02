/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	
	public:
		NinjaTrap( void );
		NinjaTrap( NinjaTrap const &src );
		NinjaTrap( std::string name );
		~NinjaTrap( void );

		NinjaTrap &operator=( NinjaTrap const &object );

		void			ninjaShoebox(ClapTrap &target);
		void			ninjaShoebox(FragTrap &target);
		void			ninjaShoebox(ScavTrap &target);
		void			ninjaShoebox(NinjaTrap &target);

};

#endif
