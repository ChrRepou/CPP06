/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:39:53 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 09:40:08 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	std::cout << "A Default constructor called" << std::endl;
}

A::A(const A &copy)
{
	*this = copy;
}

A::~A()
{
	std::cout << "A Destructor called" << std::endl;
}

A &A::operator=(const A &copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}