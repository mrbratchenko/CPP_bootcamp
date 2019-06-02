/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 13:50:50 by sbratche          #+#    #+#             */
/*   Updated: 2018/10/10 13:52:32 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct 				Data 
{ 
	std::string		s1; 
	int 			n; 
	std::string 	s2; 
};

void * serialize()
{
	Data *data = new(Data);

	std::string symb = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

	for (int i = 0; i < 8; i++)
	{
		data->s1 += symb[rand() % 62];
	}
	data->s1[8] = '\0';
	
	data->n = rand() % INT_MAX;
	
	for (int i = 0; i < 8; i++)
	{
		data->s2 += symb[rand() % 62];
	}
	data->s2[8] = '\0';
	return (reinterpret_cast<void*>(data));
}

Data *	deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main ( void )
{
	srand(time(0));
	
	Data *data;
	void *v;
	
	v = serialize();
	data = deserialize(v);

	std::cout << "s1: "<< data->s1 <<std::endl;
	std::cout << "n : "<< data->n <<std::endl;
	std::cout << "s2: "<< data->s2 <<std::endl;
	return 0;
}