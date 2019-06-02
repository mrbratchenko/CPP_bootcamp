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
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const integer )
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(integer << this->_bits);
	return ;
}

Fixed::Fixed( float const floatpoint )
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(floatpoint * (1 << this->_bits)));
	return ;
}

Fixed::Fixed( Fixed const &object )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
	return ;
}

float Fixed::toFloat( void ) const
{
	return ( (float)getRawBits() / (1 << this->_bits) );
}

int Fixed::toInt( void ) const
{
	return ( getRawBits() >> this->_bits );
}

void Fixed::setRawBits( int const raw )
{
	this->_num = raw;
	return ;
}

int Fixed::getRawBits( void ) const
{
	return this->_num;
}

Fixed &Fixed::operator=( Fixed const &object )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_num = object.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream &operator<<( std::ostream &o, Fixed const &object )
{
	o << object.toFloat();
	return o;
}
