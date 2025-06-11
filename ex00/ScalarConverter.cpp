/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 11:03:00 by samartin          #+#    #+#             */
/*   Updated: 2025-06-03 11:03:00 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {};

static int SCIsChar(const std::string& input)
{
	if (input.length() == 1 && (input[0] < '0' || input[0] > '9'))
		return (1);
	return (0);
}

static int SCIsInt(const std::string& input)
{
	size_t i = 0;

	if ((input[0] == '+' || input[0] == '-') && input.length() > 1)
		i++;
	while (i < input.length())
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int SCIsFloat(const std::string& input)
{
	size_t i = 0;
	size_t dot = -1;

	if (input == "nanf" || input == "+inff" || input == "-inff")
		return (1);
	if (input[input.length() - 1] != 'f')
		return (0);
	dot = input.find('.');
	if (dot == std::string::npos || dot != input.rfind('.'))
		return (0);
	if ((input[0] == '+' || input[0] == '-') && input.length() > 1)
		i++;
	while (i < input.length() - 1)
	{
		if ((input[i] < '0' || input[i] > '9') && dot != i)
			return (0);
		i++;
	}
	return (1);
}

static int SCIsDouble(const std::string& input)
{
	size_t i = 0;
	size_t dot = -1;

	if (input == "nan" || input == "+inf" || input == "-inf")
		return (1);
	dot = input.find('.');
	if (dot == std::string::npos || dot != input.rfind('.'))
		return (0);
	while (i < input.length())
	{
		if ((input[i] < '0' || input[i] > '9') && dot != i)
			return (0);
		i++;
	}
	return (1);
}

static void printChar(const std::string& input)
{
	char c;

	c = *input.c_str();
	std::cout << "As char: \"" << c << "\"" << std::endl;
	std::cout << "As int: " << static_cast<int>(c) << std::endl;
	std::cout << "As float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "As double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void printInt(const std::string& input)
{
	long i;

	i = std::atol(input.c_str());

	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
		std::cout << "Overflowed int type." << std::endl;
	else
	{
		std::cout << "As char: ";
		if (i >= 32 && i <= 126)
			std::cout << "\"" << static_cast<char>(i) << "\"" << std::endl;
		else
			std::cout << "Not printable." << std::endl;
		std::cout << "As int: " << i << std::endl;
		std::cout << "As float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "As double: " << static_cast<double>(i) << ".0" << std::endl;
	}
}

static void printFloat(const std::string& input)
{
	float f;
	bool nc = true;

	if (input == "nanf")
		f = 0.0f / 0.0f;
	else if (input == "+inff")
		f = 1.0f / 0.0f;
	else if (input == "-inff")
		f = -1.0f / 0.0f;
	else
	{
		nc = false;
		f = static_cast<float>(std::atof(input.c_str()));
	}
	std::cout << "As char: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else if (f >= 32 && f <= 126)
		std::cout << "\"" << static_cast<char>(f) << "\"" << std::endl;
	else
		std::cout << "Not printable." << std::endl;
	std::cout << "As int: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "As float: " << std::fixed << std::setprecision(2) << f << "f" << std::endl;
	std::cout << "As double: " << static_cast<double>(f) << std::endl;
}

static void printDouble(const std::string& input)
{
	double d;
	bool nc = true;

	if (input == "nan")
		d = 0.0 / 0.0;
	else if (input == "+inf")
		d = 1.0 / 0.0;
	else if (input == "-inf")
		d = -1.0 / 0.0;
	else
	{
		nc = false;
		d = std::atof(input.c_str());
	}
	std::cout << "As char: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else if (d >= 32 && d <= 126)
		std::cout << "\"" << static_cast<char>(d) << "\"" << std::endl;
	else
		std::cout << "Not printable." << std::endl;
	std::cout << "As int: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "As float: " << std::setprecision(2) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "As double: " << std::setprecision(2) << d << std::endl;
}

void ScalarConverter::convert(const std::string& input)
{
	if (SCIsChar(input))
		printChar(input);
	else if (SCIsInt(input))
		printInt(input);
	else if (SCIsFloat(input))
		printFloat(input);
	else if (SCIsDouble(input))
		printDouble(input);
	else
		std::cout << "Error: Invalid input" << std::endl;
}
