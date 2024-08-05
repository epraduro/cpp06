/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:45:34 by epraduro          #+#    #+#             */
/*   Updated: 2024/08/05 17:36:21 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	
}

ScalarConverter::~ScalarConverter() {
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy) {
	if (this == &copy)
		return (*this);
	return (*this);
}

void ScalarConverter::char_convert(char c) {
	/*--------CHAR---------*/
	std::cout << "'" << static_cast<char>(c) << "'";
	std::cout << std::endl;

	/*--------INT---------*/
	std::cout << "int: ";

	if (std::isnan(c) || std::isinf(c))
		std::cout << "Impossible";
	else
		std::cout << static_cast<int>(c);
	std::cout << std::endl;
	
	/*--------FLOAT---------*/
	std::cout << "float: ";
	
	std::cout << static_cast<float>(c);
	if (static_cast<int>(c) == c)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;

	/*-------DOUBLE--------*/
	std::cout << "double: ";
	
	std::cout << static_cast<int>(c);
	if (static_cast<int>(c) == c)
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::convert(std::string str)
{
	double c = atof(str.c_str());
	
	/*--------CHAR---------*/
	std::cout << "char: ";
	
	if (!str[1] && (str[0] < 0 || str[0] > 127 || std::isnan(str[0]) || std::isinf(str[0])))
		std::cout << "Impossible";
	else if (str[0] < 32 || str[0] > 126)
		std::cout << "Non displayable";
		
	if (!str[1] && (str[0] >= 32 || str[0] <= 126)) {
		char_convert(str[0]);
		return ;
	}
	else
		std::cout << "'" << static_cast<char>(c) << "'" << std::endl;

	/*--------INT---------*/
	std::cout << "int: ";

	if (std::isnan(c) || std::isinf(c))
		std::cout << "Impossible";
	else
		std::cout << static_cast<int>(c);
	std::cout << std::endl;

	/*--------FLOAT---------*/
	std::cout << "float: ";
	
	std::cout << static_cast<float>(c);
	if (static_cast<int>(c) == c)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;

	/*-------DOUBLE--------*/
	std::cout << "double: ";
	
	std::cout << c;
	if (static_cast<int>(c) == c)
		std::cout << ".0";
	std::cout << std::endl;
}