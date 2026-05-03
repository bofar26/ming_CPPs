/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:43:43 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:18:05 by mipang           ###   ########.fr       */
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
	Animal*	animal;
	animal = NULL;
	else if (argv[1] == "Dog")
	{
		Dog(doggy);
		doggy.makeSound();
	}
	else if (argv[1] == "Cat")
	{
		Cat(kitty);
		kitty.makeSound();
	}
	return (0);
}
