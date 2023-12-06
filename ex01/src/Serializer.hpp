/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:11:00 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 09:20:28 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

typedef struct Data
{
	std::string str;
	int n;
	bool b;
	double d;
} Data;

class Serializer
{
	private:
		Serializer(); // Private constructor -- the class is not meant to be instanciated
		Serializer(const Serializer &copy);
		~Serializer();
		Serializer &operator=(const Serializer &copy);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif