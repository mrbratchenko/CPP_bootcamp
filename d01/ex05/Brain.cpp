/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:14 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:16 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	return ;
}

std::string		Brain::identify(void) const
{
	std::stringstream	stream;
	std::string			str;
	stream << this;
	str = stream.str();
	return (str);
}

Brain::~Brain(void)
{
	return ;
}
