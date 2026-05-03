/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:46:31 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 16:39:05 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Animal::Animal(std::string type)
{
	this -> type = type;
	std::cout << "The animal is " << type << std::endl;
}
virtual	Animal::~Animal()
{

}
Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << type << " is copied" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
	if (this != other)
		this -> type = other -> type;
}

virtual	void	makeSound() const;
