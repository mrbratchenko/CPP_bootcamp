/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Breated: 2018/06/25 10:08:41 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:42 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H

#include "Base.hpp"

class B: public Base
{
	public:
		B( void );
		B( B const &src );
		~B( void );
		B &operator=( B const &object );
		virtual std::string announce( void );
};

#endif

