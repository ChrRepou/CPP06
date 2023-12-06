/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:21:47 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 10:07:00 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void )
{
	Data* data = new Data;
	data->str = "Hello World!";
	data->n = 42;
	data->b = true;
	data->d = 3.14;

	uintptr_t raw = Serializer::serialize(data);
	Data* data2 = Serializer::deserialize(raw);

	std::cout << std::endl;
	std::cout << "Data before serialization" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "data->str = " << data->str << std::endl;
	std::cout << "data->n = " << data->n << std::endl;
	std::cout << "data->b = " << data->b << std::endl;
	std::cout << "data->d = " << data->d << std::endl;

	std::cout << std::endl;
	std::cout << "Data after serialization" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "data2->str = " << data2->str << std::endl;
	std::cout << "data2->n = " << data2->n << std::endl;
	std::cout << "data2->b = " << data2->b << std::endl;
	std::cout << "data2->d = " << data2->d << std::endl;

	delete data; //avoid leaks
	std::cout << std::endl;
	
	return (0);
}