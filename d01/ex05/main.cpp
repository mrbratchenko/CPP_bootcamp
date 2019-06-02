/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:46 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:48 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int			main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
