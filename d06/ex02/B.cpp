/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:47 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:49 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B ( void )
{
	return ;
}

B &B::operator=( B const & )
{
	return *this;
}

B::B( B const &src )
{
	*this = src;
	return ;
}

B::~B ( void )
{
	return ;
}

std::string B::announce( void )
{
	return "B";
}