/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 11:04:11 by samartin          #+#    #+#             */
/*   Updated: 2025-06-03 11:04:11 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Serializer.hpp"

int main(void)
{
	Data example;
	Data* dataPtr = &example;
	uintptr_t intPtr;
	Data* anotherDataPtr = NULL;
	
	example.name = "Ejemplo";
	example.index = 11;
	example.units = 300;
	example.weigth = 199.012;

	std::cout << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << TSTH << "| Data Structure contents as created |" << TSTR << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << "Address: " << &example << std::endl;
	std::cout << "content: " << std::endl;
	std::cout << example.name << std::endl;
	std::cout << example.index << std::endl;
	std::cout << example.units << std::endl;
	std::cout << example.weigth << std::endl;

	intPtr = Serializer::serialize(dataPtr);

	std::cout << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << TSTH << "|     Content serialized as int      |" << TSTR << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << "Address: " << intPtr << std::endl;
	std::cout << "Content: " << *(int*)intPtr << std::endl;

	anotherDataPtr = Serializer::deserialize(intPtr);

	std::cout << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << TSTH << "|  Data Structure after deserialize  |" << TSTR << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << "Address: " << anotherDataPtr << std::endl;
	std::cout << "Content: " << std::endl;
	std::cout << anotherDataPtr->name << std::endl;
	std::cout << anotherDataPtr->index << std::endl;
	std::cout << anotherDataPtr->units << std::endl;
	std::cout << anotherDataPtr->weigth << std::endl;
	
	return (0);
}