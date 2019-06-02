/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:41 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:42 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H

#include "Base.hpp"

class C: public Base
{
	public:
		C( void );
		C( C const &src );
		~C( void );
		C &operator=( C const &object );
		virtual std::string announce( void );
};

#endif

