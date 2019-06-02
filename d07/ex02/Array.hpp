/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:45:18 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/27 16:45:20 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template< typename T >
class Array
{
	public:
		Array( void );
		Array( unsigned int size );
		Array( Array< T > const & src );
		~Array( void);
		T &		operator[]( unsigned int n );
		Array<T> &	operator=( Array<T> const& src );	
		unsigned int	size() const;
	
	private:
		unsigned int 	_elem;
		T* 				_array;
};

#include "Array.tpp"

#endif
