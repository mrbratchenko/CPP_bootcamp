/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 09:33:14 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/18 09:33:16 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int			main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
				{
					argv[i][j] = argv[i][j] - 32;
				}
				std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}
