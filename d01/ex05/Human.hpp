/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:33:30 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:33:31 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"

class Human 
{
	private:
		const Brain br;
	public:
		Human(void);
		~Human(void);
		const Brain	&getBrain(void);
		std::string	identify(void);
};

#endif
