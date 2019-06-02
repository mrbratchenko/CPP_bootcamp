/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

#include <string>
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
#include "Pigeon.hpp"

class Sorcerer 
{
	private:

		std::string _name;
		std::string _title;
		
	public:

		Sorcerer( void );
		~Sorcerer( void );
		Sorcerer( Sorcerer const &src );
		Sorcerer &operator=( Sorcerer const &object );

		Sorcerer( std::string name, std::string title );

		std::string getName( void ) const;
		std::string getTitle( void ) const;
		void polymorph(Victim const &) const;

};

std::ostream &operator<<(std::ostream &o , Sorcerer const & src);

#endif
