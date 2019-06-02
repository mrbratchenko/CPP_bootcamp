/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:56:09 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 12:56:11 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie 
{
	public:
		std::string		name;
		std::string		type;
		void			announce(void);
		Zombie(void);
		~Zombie(void);
};		

#endif
