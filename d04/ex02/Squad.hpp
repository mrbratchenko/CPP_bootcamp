/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class	Squad : public ISquad
{


	private:
		int					_units;
		ISpaceMarine		*_marine[500];

	public:

		Squad(void);
		Squad(Squad const &src);
		virtual ~Squad(void);
		Squad &operator=(Squad const &object);

		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);

	
};

#endif