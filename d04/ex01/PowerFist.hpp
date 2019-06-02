/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{

public:
	PowerFist( void );
	PowerFist( PowerFist const &src );
	~PowerFist( void );

	PowerFist &operator=( PowerFist const &object );

	virtual void attack() const;

};


#endif