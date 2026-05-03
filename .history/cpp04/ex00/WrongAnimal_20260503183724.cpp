/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:32:17 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:33:16 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string& type)
{
	this -> type = type;
	std::cout << "WrongAnimal constructor"<< std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor"<< std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << "WrongAnimal "<< type << " is copied" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this -> type = other.type;
	std::cout << "WrongAnimal " << type << " is assigned" << std::endl;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Some WrongAnimal sound" << std::endl;
}

Cat:: Cat(): Animal("Cat"){std::cout << "Cat constructor"<< std::endl;}
Cat::~Cat(){std::cout << "Cat destructor"<< std::endl;}
Cat:: Cat(const Cat& other) : Animal(other){}
Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator=(other);
	return *this;
}
void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
