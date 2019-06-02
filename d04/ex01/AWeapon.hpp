/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>
#include <string>

class AWeapon
{

	protected:

		std::string			name;
		int					apcost;
		int					damage;

	public:
		AWeapon( void );
		AWeapon( AWeapon const &src );
		AWeapon(std::string const & name, int apcost, int damage);
		~AWeapon( void );

		AWeapon &operator=( AWeapon const &object );

		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;

		virtual void attack() const = 0;
};


#endif