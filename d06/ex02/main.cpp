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

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
	if (rand() % 3 == 1)
	{
		std::cout<<"Generated A"<< std::endl;
		return new A();
	}
	else if (rand() % 3 == 2)
	{
		std::cout<<"Generated B"<< std::endl;
		return new B();
	}
	else
	{
		std::cout<<"Generated C"<< std::endl;
		return new C();
	}

}

void identify_from_pointer( Base * p )
{
	A *classA = dynamic_cast<A *>(p);
	B *classB = dynamic_cast<B *>(p);
	C *classC = dynamic_cast<C *>(p);
	if (classA != NULL)
	{
		std::cout << "A (from pointer)" << std::endl;
	}
	else if (classB != NULL)
	{
		std::cout << "B (from pointer)" << std::endl;
	}
	else if (classC != NULL)
	{
		std::cout << "C (from pointer)" << std::endl;
	}
	else
	{
		std::cout << "Non existing child class." << std::endl;
	}
}

void identify_from_reference( Base & p )
{
	try
	{
		A &classA = dynamic_cast<A &>(p);
		std::cout << classA.announce() << " (from reference)" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		;
	}

	try
	{
		B &classB = dynamic_cast<B &>(p);
		std::cout << classB.announce() << " (from reference)" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		;
	}

	try
	{
		C &classC = dynamic_cast<C &>(p);
		std::cout << classC.announce() << " (from reference)" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
	std::cout << "Non existing child class." << std::endl;
}

int main( void )
{
	srand(time(0));

	Base *baseClass1;
	baseClass1 = generate();
	
	identify_from_pointer(baseClass1);
	Base *baseClass2;
	baseClass2 = generate();
	identify_from_reference(*baseClass2);
	
}
