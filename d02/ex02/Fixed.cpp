/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:25:04 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 11:25:06 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_num = 0;
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed::Fixed( Fixed const &object )
{
	*this = object;
	return ;
}

Fixed::Fixed( int const integer )
{
	setRawBits( integer << this->_bits );
	return ;
}

Fixed::Fixed( float const floatpoint )
{
	setRawBits( roundf(floatpoint * (1 << this->_bits )) );
	return ;
}

void	Fixed::setRawBits( int const raw )
{
	this->_num = raw;
	return ;
}

int		Fixed::getRawBits( void ) const
{
	return this->_num;
}

int		Fixed::toInt( void ) const
{
	return ( getRawBits() >> this->_bits );
}

float	Fixed::toFloat( void ) const
{
	return ( (float)getRawBits() / (1 << this->_bits) );
}

Fixed	&Fixed::operator=( Fixed const &object )
{
	this->_num = object.getRawBits();
	return *this;
}

Fixed	Fixed::operator+( Fixed const &object )
{
	Fixed fix;
	fix.setRawBits(this->_num + object.getRawBits() );
	return fix;
}

Fixed	Fixed::operator-( Fixed const &object )
{
	Fixed fix;
	fix.setRawBits(this->_num - object.getRawBits() );
	return fix;
}

Fixed	Fixed::operator*( Fixed const &object )
{
	return Fixed( this->toFloat() * object.toFloat());
}

Fixed	Fixed::operator/( Fixed const &object )
{
	if ( object.getRawBits() != 0 )
		return Fixed( this->toFloat() / object.toFloat() );
	return Fixed(0);
}


bool	Fixed::operator>( Fixed const &object )
{
	if ( getRawBits() > object.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const &object )
{
	if ( getRawBits() < object.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const &object )
{
   if ( getRawBits() >= object.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const &object )
{
	if ( getRawBits() <= object.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const &object )
{
	if ( getRawBits() == object.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const &object )
{
	if ( getRawBits() != object.getRawBits() )
		return true;
	return false;
}

Fixed	&Fixed::operator++( void )
{
	this->_num += 1;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed obj = *this;
	this->_num += 1;
	return obj;
}

Fixed	&Fixed::operator--( void )
{
	this->_num -= 1;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed obj = *this;
	this->_num -= 1;
	return obj;
}


Fixed	&Fixed::min( Fixed &one, Fixed &two )
{
	if ( one.getRawBits() < two.getRawBits() )
		return one;
	return two;
}

Fixed 	&Fixed::max( Fixed &one, Fixed &two )
{
	if ( one.getRawBits() > two.getRawBits() )
		return one;
	return two;
}

const	Fixed	&Fixed::min( Fixed const &one, Fixed const &two )
{
	if ( one.getRawBits() < two.getRawBits() )
		return one;
	return two;
}

const	Fixed 	&Fixed::max( Fixed const &one, Fixed const &two )
{
	if ( one.getRawBits() > two.getRawBits() )
		return one;
	return two;
}

std::ostream &operator<<( std::ostream &o, Fixed const &object )
{
	o << object.toFloat();
	return o;
}
