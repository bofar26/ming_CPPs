/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:43:43 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:19:59 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return (1);
	}
	std::string	type;
	type = argv[1];
	Animal*	animal;
	animal = NULL;
	if (type == "Dog")
		animal = new Dog();
	else if (type == "Cat")
		animal = new Dog();
	else
	{
		std::cout << "Unknown animal" << std::endl;
		return (1);
	}
	animal -> makeSound();
	delete animal;
	return (0);
}
