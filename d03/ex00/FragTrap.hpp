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

class FragTrap 
{
	private:
		std::string		_Name;
		
		int				_HitPoints;
		int				_MaxHitPoints;
		int				_EnergyPoints;
		int				_MaxEnergyPoints;
		int				_Level;
		int				_MeleeAttackDamage;
		int				_RangedAttackDamage;
		int				_ArmorDamageReduction;
	
	public:
		FragTrap( void );
		FragTrap( FragTrap const &src );
		FragTrap( std::string Name );
		~FragTrap( void );

		FragTrap &operator=( FragTrap const &object );
		
		void			rangedAttack( std::string const &target );
		void			meleeAttack( std::string const &target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		void			vaulthunter_dot_exe(std::string const &target);
		void			setName (std::string name);
		std::string		getName (void);
		unsigned int	getRaDamage(void);
		unsigned int	getMaDamage(void);
		void 			attackOne( std::string const &target );
		void 			attackTwo( std::string const &target );
		void 			attackThree( std::string const &target );
		void 			attackFour( std::string const &target );	
		void 			attackFive( std::string const &target );

};

#endif
