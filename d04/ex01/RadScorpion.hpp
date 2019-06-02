/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion: public Enemy
{

public:
	RadScorpion( void );
	RadScorpion( RadScorpion const &src );
	virtual ~RadScorpion( void );

	RadScorpion &operator=( RadScorpion const &object );

};

#endif