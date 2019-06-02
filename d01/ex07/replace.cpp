/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:50:29 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/20 14:50:30 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::string str3;
	size_t pos;
	std::string newname;
	std::string buff;

	if (argc != 4)
	{
		std::cout << "\tusage: ./replace [file] [string1] [string2] " << std::endl;
		return (1);
	}
	str1 = argv[1];
	str2 = argv[2];
	str3 = argv[3];
	if (str1.empty() || str2.empty())
	{
		std::cout << "\tusage: ./replace [file] [string1] [string2] " << std::endl;
		return (1);
	}
	for(int i = 0; str1[i]; i++)
		str1[i] = toupper(str1[i]);
	newname = str1 += ".replace";
	std::ifstream original (argv[1]);
	if (!original)
	{
		std::cout << "Failed to open file." << std::endl;
		return (1);
	}
	std::ofstream replace (newname);
	if (!replace)
	{
		std::cout << "Failed to create file." << std::endl;
		return (1);
	}
	
	while (std::getline(original, buff))
	{
		pos = 0;
		while ((pos = buff.find(str2, pos)) != std::string::npos)
		{
			buff.replace(pos, str2.length(), str3);
			pos += str3.length();
		}
		replace << buff << std::endl;	
	}
	replace.close();
	original.close();
	return 0;
}
