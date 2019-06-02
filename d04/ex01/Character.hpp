/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

	private:
		std::string			name;
		int					AP;
		AWeapon				*weapon;
	public:
		Character( void );
		Character( Character const &src );
		Character(int hp, std::string const & type);
		~Character( void );

		Character( std::string const & name );

		Character &operator=( Character const &object );

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
	
	std::string getName() const;
	int getAP() const;
	AWeapon * getWeapon() const;


};

std::ostream &operator<<(std::ostream &o , Character const & src);


#endif