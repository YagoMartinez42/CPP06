/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-11 13:57:51 by samartin          #+#    #+#             */
/*   Updated: 2025-06-11 13:57:51 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include "Data.hpp"
# include <stdint.h>

class Serializer {
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		~Serializer();
	private:
		Serializer();
		Serializer(const Serializer& orig);
		Serializer& operator=(const Serializer& orig);
};

#endif