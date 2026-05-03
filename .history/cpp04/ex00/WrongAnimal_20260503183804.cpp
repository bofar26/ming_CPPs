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

WrongCat:: WrongCat(): WrongAnimal("WrongCat"){std::cout << "WrongCat constructor"<< std::endl;}
WrongCat::~WrongCat(){std::cout << "WrongCat destructor"<< std::endl;}
WrongCat:: WrongCat(const WrongCat& other) : Animal(other){}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}
void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
