/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functionality.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 11:01:10 by samartin          #+#    #+#             */
/*   Updated: 2025-06-23 11:01:10 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functionality.hpp"

Base* generate(void)
{
	Base* theChoosenOne;
	int opt;

	std::srand(std::time(0));
	opt = std::rand() % 3;
	if (opt == 0)
		theChoosenOne = new A;
	else if (opt == 1)
		theChoosenOne = new B;
	else
		theChoosenOne = new C;
	return (theChoosenOne);
}

void identify(Base* p)
{
	A* a;
	B* b;
	C* c;

	a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "Object is `A` type." << std::endl;
		return;
	}
	b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "Object is `B` type." << std::endl;
		return;
	}
	c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "Object is `C` type." << std::endl;
		return;
	}
	std::cout << "Object is of unknown type." << std::endl;
}

void identify(Base& p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "Object is `A` type." << std::endl;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "Object is `B` type." << std::endl;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "Object is `C` type." << std::endl;
		return;
	}
	catch(const std::exception& e) {}
}
