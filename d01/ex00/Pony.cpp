/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 10:36:24 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 10:36:26 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color): _name(name), _color(color)
{
	std::cout << "Pony is born!" << std::endl;
	return ;
}

std::string		Pony::getName(void)
{
	return this->_name;
}

std::string		Pony::getColor(void)
{
	return this->_color;
}

std::string		Pony::sayHello(void)
{
	return "\tHello, my name is ";
}

Pony::~Pony(void)
{
	std::cout << "Pony has died!" << std::endl;
	return ;
}
