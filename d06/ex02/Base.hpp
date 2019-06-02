/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:41 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:42 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>
#include <string>
#include <iomanip>

class Base
{
	public:
		Base( void );
		Base( Base const &src );
		virtual ~Base( void );
		Base &operator=( Base const &object );
		virtual std::string announce( void ) = 0;

};

#endif

