/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Areated: 2018/06/25 10:08:41 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:42 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H

#include "Base.hpp"

class A: public Base
{
	public:
		A( void );
		A( A const &src );
		~A( void );
		A &operator=( A const &object );
		virtual std::string announce( void );
};

#endif

