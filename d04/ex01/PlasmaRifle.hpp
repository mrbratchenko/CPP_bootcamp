/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{

public:
	PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const &src );
	~PlasmaRifle( void );

	PlasmaRifle &operator=( PlasmaRifle const &object );

	virtual void attack() const;
};

#endif