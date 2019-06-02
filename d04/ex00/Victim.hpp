/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <string>
#include <iostream>

class Victim 
{
	protected:

		std::string _name;
		
	public:

		Victim( void );
		~Victim( void );
		Victim( Victim const &src );
		Victim &operator=( Victim const &object );

		Victim ( std::string _name );
		std::string getName( void ) const;
		virtual void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &o , Victim const & src);

#endif
