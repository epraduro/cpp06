/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:06:22 by epraduro          #+#    #+#             */
/*   Updated: 2024/08/05 14:30:02 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	
	if (ac == 2)
	{
		ScalarConverter::convert(av[1]);
		return (0);	
	}
	std::cout << "Argument is missing!" << std::endl;
	return (1);
}