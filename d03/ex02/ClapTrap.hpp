/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap 
{
	public:
		
		ClapTrap( void );
		ClapTrap( ClapTrap const &src );
		ClapTrap( std::string Name );
		~ClapTrap( void );
		ClapTrap &operator=( ClapTrap const &object );

		void			rangedAttack( std::string const &target );
		void			meleeAttack( std::string const &target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		void			setName (std::string name);
		std::string		getName (void);
		unsigned int	getRaDamage(void);
		unsigned int	getMaDamage(void);	

	protected:
		std::string		_Name;
		int				_HitPoints;
		int				_MaxHitPoints;
		int				_EnergyPoints;
		int				_MaxEnergyPoints;
		int				_Level;
		int				_MeleeAttackDamage;
		int				_RangedAttackDamage;
		int				_ArmorDamageReduction;

};

#endif

