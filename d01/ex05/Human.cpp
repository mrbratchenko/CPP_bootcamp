/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:33:12 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:33:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return ;
}

const Brain &Human::getBrain()
{
	return (this->br);
}

std::string		Human::identify(void)
{
	return (this->br.identify());
}

Human::~Human(void)
{
	return ;
}
