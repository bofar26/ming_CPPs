/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:32:17 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:33:16 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wronganimal.hpp"

Wronganimal::Wronganimal(const std::string& type)
{
	this -> type = type;
	std::cout << "Wronganimal constructor"<< std::endl;
}
Wronganimal::~Wronganimal()
{
	std::cout << "Wronganimal destructor"<< std::endl;
}
Wronganimal::Wronganimal(const Wronganimal& other)
{
	*this = other;
	std::cout << "Wronganimal "<< type << " is copied" << std::endl;
}
Wronganimal& Wronganimal::operator=(const Wronganimal& other)
{
	if (this != &other)
		this -> type = other.type;
	std::cout << "Wronganimal " << type << " is assigned" << std::endl;
	return *this;
}

void	Wronganimal::makeSound() const
{
	std::cout << "Some Wronganimal sound" << std::endl;
}
