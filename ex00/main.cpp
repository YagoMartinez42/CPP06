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
#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	return (0);
}