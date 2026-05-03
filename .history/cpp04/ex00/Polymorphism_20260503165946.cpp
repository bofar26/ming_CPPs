/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:46:31 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 16:59:46 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Animal::Animal(const std::string& type)
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
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Some animal sound" << std::endl;
}

Dog:: Dog(): Animal("Dog"){}
Dog::~Dog(): ~Animal(){}
Dog:: Dog(const Dog& other)
		Dog& operator=(const Animal& other);
void	Dog::makeSound() const;

