/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:33:59 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/29 14:34:01 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span ( void ): _n(0)
{
	_vec.reserve(0);
	return ;
}

Span::Span ( unsigned int n ): _n(n)
{
	_vec.reserve(n);
	return ;
}

Span &Span::operator=( Span const & src)
{
	this->_n = src._n;
	this->_vec = src._vec;
	return *this;
}

Span::Span( Span const &src )
{
	*this = src;
	return ;
}

Span::~Span ( void )
{
	return ;
}

void Span::addNumber( int num )
{
	if(_vec.size() < _vec.capacity())
	{
		_vec.insert( std::upper_bound( _vec.begin(), _vec.end(), num ), num );
	}
	else
	{
		throw std::out_of_range("no space left");
	}	
}

int Span::shortestSpan( void )
{
	if (!_vec.size() || _vec.size() == 1)
		throw std::invalid_argument("no span can be calculated");
	int res, temp;
	res = std::abs(_vec.at(1) - _vec.at(2));
	for( unsigned int i = 0; i < _n - 1; i++ )
    {
        if (_vec.at(i) && _vec.at(i + 1))
        {
        	temp = std::abs(_vec.at(i) - _vec.at(i + 1));
        	if (temp < res)
        		res = temp;
        }
    }
	return res;
}

int Span::longestSpan( void )
{
	if (!_vec.size() || _vec.size() == 1)
		throw std::invalid_argument("no span can be calculated");
	return std::abs(_vec.back() - _vec.at(0));
}
