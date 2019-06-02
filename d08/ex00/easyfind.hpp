/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:33:59 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/29 14:34:01 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>

template< typename T >
void easyfind( T const & container, int const & number ) 
{
	typename T::const_iterator iter;
	iter = std::find(container.begin(), container.end(), number);
	if (iter != container.end())
	{
			std::cout << "Int value found." << std::endl;
	}
	else
	{
		throw std::range_error("Int value not found.");
	}
};

#endif

