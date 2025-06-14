/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-11 13:57:54 by samartin          #+#    #+#             */
/*   Updated: 2025-06-11 13:57:54 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t seriePtr = reinterpret_cast<uintptr_t>(ptr);
    return (seriePtr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* DataPtr = reinterpret_cast<Data *>(raw);
    return (DataPtr);
}

Serializer::~Serializer() {}