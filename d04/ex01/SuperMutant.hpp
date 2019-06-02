/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{

public:
	SuperMutant( void );
	SuperMutant( SuperMutant const &src );
	virtual ~SuperMutant( void );

	SuperMutant &operator=( SuperMutant const &object );

	virtual void takeDamage(int);

};

#endif