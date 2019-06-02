/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:33:59 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/29 14:34:01 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <iostream>

class Span
{
	private:
		std::vector<int> 	_vec;
		unsigned int		_n;
	
	public:
		Span( void );
		Span( unsigned int n );
		Span( Span const &src );
		~Span( void );
		Span &operator=( Span const &object );

		void addNumber( int );
		int shortestSpan( void );
		int longestSpan( void );
	
};

#endif

