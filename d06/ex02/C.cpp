/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:47 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:49 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C ( void )
{
	return ;
}

C &C::operator=( C const & )
{
	return *this;
}

C::C( C const &src )
{
	*this = src;
	return ;
}

C::~C ( void )
{
	return ;
}

std::string C::announce( void )
{
	return "C";
}