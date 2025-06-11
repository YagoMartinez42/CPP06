/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 11:03:12 by samartin          #+#    #+#             */
/*   Updated: 2025-06-03 11:03:12 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <cstdlib>

class ScalarConverter
{
	public:
		static void convert(const std::string& input);
		~ScalarConverter();
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& orig);
		ScalarConverter &operator=(const ScalarConverter &orig);
};
#endif
