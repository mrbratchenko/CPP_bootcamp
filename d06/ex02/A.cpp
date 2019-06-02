/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:47 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:49 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A ( void )
{
	return ;
}

A &A::operator=( A const & )
{
	return *this;
}

A::A( A const &src )
{
	*this = src;
	return ;
}

A::~A ( void )
{
	return ;
}

std::string A::announce( void )
{
	return "A";
}
