/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:41:08 by epraduro          #+#    #+#             */
/*   Updated: 2024/08/05 14:30:30 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

typedef unsigned long uintptr_t;

struct Data {
	
	std::string name;
	
};

class Serializer {

	private :
		Serializer();
	public :

		~Serializer();
		Serializer(const Serializer &copy);
		Serializer& operator=(const Serializer &copy);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};