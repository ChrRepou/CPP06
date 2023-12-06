/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:27:08 by crepou            #+#    #+#             */
/*   Updated: 2023/12/04 22:53:55 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

enum type {
    CHAR = 0,           // Represents the type CHAR
    INT = 1,            // Represents the type INT
    DOUBLE = 2,         // Represents the type DOUBLE
    FLOAT = 3,          // Represents the type FLOAT
    POSITIVE_INF = 4,   // Represents the type POSITIVE_INF
    NEGATIVE_INF = 5,   // Represents the type NEGATIVE_INF
    NANF = 6             // Represents the type NAN
};

class ScalarConverter
{
	private:
		ScalarConverter(); // Private constructor -- the class is not meant to be instanciated
		static char _char;
		static int _int;
		static double _double;
		static float _float;

	public:
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &copy);

		static void convert(std::string str);
		static type getType(std::string str);

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

int hasNonDisplayableChar(std::string str);

#endif