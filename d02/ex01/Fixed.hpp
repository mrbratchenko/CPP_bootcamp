/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:21:51 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 11:21:54 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _num;
		static const int _bits = 8;
	public:
		Fixed( void );
		Fixed( int const integer );
		Fixed( float const floatpoint );
		Fixed( Fixed const &object );
		~Fixed( void );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed	&operator=( Fixed const &object );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator<<( std::ostream &o, Fixed const &object );

#endif
