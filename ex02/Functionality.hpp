/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functionality.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-23 11:04:09 by samartin          #+#    #+#             */
/*   Updated: 2025-06-23 11:04:09 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONALITY_HPP
# define FUNCTIONALITY_HPP
# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif