/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	int i = 0;
	for (int i = 0; i < 500; i++)
		this->_marine[i] = NULL;
	this->_units = 0;
	return ;
}

Squad::Squad (Squad const &src) 
{
	for (int i = 0; i < 500; i++)
		this->_marine[i] = src.getUnit(i);
	this->_units = src.getCount();
	*this = src;
	return;
}

Squad & Squad::operator=(Squad const &object)
{
	return *this;
}

Squad::~Squad()
{
	for (int i = 0; i < 500; i++)
		delete this->_marine[i];
	return;	
}

int Squad :: getCount() const
{
	return this->_units;
}

ISpaceMarine* Squad:: getUnit(int num) const
{
	if (num < 500 && this->_marine[num])
		return (this->_marine[num]);
	else
		return (NULL);
}

int Squad::push(ISpaceMarine* marine)
{
	int i = 0;
	while (i < 500 && this->_marine[i])
		i++;
	if (i < 499)
	{
		this->_marine[i] = marine;
		this->_units = i + 1;
		return i;
	}
	else
	{
		std::cout << "This squad is full!" <<std::endl;
		this->_units  = i;
		return i;
	}

}

