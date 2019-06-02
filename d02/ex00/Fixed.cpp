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
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
	return ;
}

Fixed::Fixed( Fixed const &object )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
	return ;
}

void Fixed::setRawBits( int const raw )
{
	this->_num = raw;
	return ;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_num;
}

Fixed &Fixed::operator=( Fixed const &object )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_num = object.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
