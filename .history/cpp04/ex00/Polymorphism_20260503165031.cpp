/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:46:31 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 16:50:31 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Animal::Animal(std::string type)
{
	this -> type = type;
	std::cout << "The animal is " << type << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal: " << type << " is destroyed" << std::endl;
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
}

void	Animal::makeSound() const
{
	std::cout << "Some animal sound" << std::endl;
}

Dog::
