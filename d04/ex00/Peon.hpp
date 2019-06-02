/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon: public Victim
{		
	public:

		Peon( void );
		~Peon( void );
		Peon( Peon const &src );
		Peon &operator=( Peon const &object );
		
		Peon ( std::string _name );
		void getPolymorphed() const;

};

#endif
