/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>
#include <string>

class Enemy
{

	protected:

		std::string			type;
		int					HP;

	public:

		Enemy( void );
		Enemy( Enemy const &src );
		Enemy(int hp, std::string const & type);
		virtual ~Enemy( void );

		Enemy &operator=( Enemy const &object );

		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
	
};

#endif
