/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.cpp                                    :+:      :+:    :+:   */
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
	std::cout << "Animal constructor"<< std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal destructor"<< std::endl;
}
Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << "Animal "<< type << " is copied" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this -> type = other.type;
	std::cout << "Animal " << type << " is assigned" << std::endl;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Some animal sound" << std::endl;
}
