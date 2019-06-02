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
	private:
		std::string		_name;
		std::string		_type;

	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void			announce(void);
};

#endif
