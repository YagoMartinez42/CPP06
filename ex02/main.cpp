/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-15 18:25:41 by samartin          #+#    #+#             */
/*   Updated: 2025-06-15 18:25:41 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	Base* randomObject;

	std::cout << std::endl;
	std::cout << TSTH << "=========================================" << TSTR << std::endl;
	std::cout << TSTH << "|  Generating random objects six times  |" << TSTR << std::endl;
	std::cout << TSTH << "|      odd iterations as a pointer      |" << TSTR << std::endl;
	std::cout << TSTH << "|    even iterations as a reference.    |" << TSTR << std::endl;
	std::cout << TSTH << "=========================================" << TSTR << std::endl;
	for (int i = 0; i < 6; i++)
	{
		randomObject = generate();
		if (i & 1)
		{
			std::cout << TSTH << "Identifiying as a reference." << TSTR << std::endl;
			identify(*randomObject);
		}
		else
		{
			std::cout << TSTH << "Identifiying as a pointer." << TSTR << std::endl;
			identify(randomObject);
		}
		delete(randomObject);
	}
	return (0);
}