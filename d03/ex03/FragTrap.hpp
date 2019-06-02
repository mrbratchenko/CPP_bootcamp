/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	
	public:
		FragTrap( void );
		FragTrap( FragTrap const &src );
		FragTrap( std::string name );
		~FragTrap( void );

		FragTrap &operator=( FragTrap const &object );

		void			vaulthunter_dot_exe(std::string const &target);

};

#endif
