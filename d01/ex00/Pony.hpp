/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:36:34 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 10:36:36 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony 
{
	private:
		std::string		_name;
		std::string		_color;
	public:
		Pony(std::string, std::string);
		~Pony(void);
		std::string		getColor(void);
		std::string		getName(void);
		std::string		sayHello(void);
};

#endif
