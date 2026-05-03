/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:46:31 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:22:29 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Animal::Animal(const std::string& type)
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

Dog:: Dog(): Animal("Dog"){std::cout << "Dog constructor"<< std::endl;}
Dog::~Dog(){std::cout << "Dog destructor"<< std::endl;}
Dog:: Dog(const Dog& other) : Animal(other){}
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		Animal::operator=(other);
	return *this;
}
void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
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

