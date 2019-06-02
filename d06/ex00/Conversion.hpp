/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:41 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:42 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

#include <iostream>
#include <string>
#include <iomanip>

class Conversion
{
	public:
		Conversion( void );
		Conversion( std::string );
		Conversion( std::string name, int grade );
		Conversion( Conversion const &src );
		~Conversion( void );

		Conversion &operator=( Conversion const &object );

		std::string getInput( void ) const;
		char getChar( void ) const;
		int getInt( void ) const;
		float getFloat( void ) const;
		double getDouble( void ) const;
		
		void setChar( std::string );
		void setInt( std::string );
		void setFloat( std::string );
		void setDouble( std::string );


	private:
		std::string _input;
		int ifChar;
		char _char;
		int _int;
		float _float;
		double _double;
};
std::ostream &operator<<( std::ostream &o, Conversion  &object );

#endif

