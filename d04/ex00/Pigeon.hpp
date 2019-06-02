/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pigeon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIGEON_H
# define PIGEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Pigeon: public Victim
{		
	public:

		Pigeon( void );
		~Pigeon( void );
		Pigeon( Pigeon const &src );
		Pigeon &operator=( Pigeon const &object );
		
		Pigeon ( std::string _name );
		void getPolymorphed() const;

};

#endif
