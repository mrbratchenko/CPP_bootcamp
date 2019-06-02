/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 15:01:06 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/26 15:01:07 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrent input." << std::endl;
		return 0;
	}
	
	Conversion cObj(argv[1]);
	std::cout << cObj;
	
	return 0;
}
