/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:43:43 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:13:01 by mipang           ###   ########.fr       */
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
	else if (argv[1] == "Dog")
		Dog(doggy);
	Cat(kitty);
	doggy.makeSound();
	kitty.makeSound();
	return (0)
}
