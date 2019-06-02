/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:26 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
#include <iostream>
#include <string>
#include <sstream>

class Brain 
{
	public:
		Brain(void);
		~Brain(void);
		std::string identify(void) const;
};

#endif
