/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:42:51 by epraduro          #+#    #+#             */
/*   Updated: 2024/08/05 17:16:51 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cfloat>
#include <cmath>

class ScalarConverter {
	private:

		ScalarConverter();
	public:
		
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(const ScalarConverter &copy);
		
		static void convert(std::string str);
		static void char_convert(char c);

};