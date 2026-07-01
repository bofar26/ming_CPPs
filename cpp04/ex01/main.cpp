/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:42:14 by mipang            #+#    #+#             */
/*   Updated: 2026/05/09 17:52:55 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

static void	printSection(const std::string& title)
{
	std::cout << std::endl;
	std::cout << "===== " << title << " =====" << std::endl;
}

static void	testAnimalArray()
{
	Animal*	animals[4];

	printSection("Animal array with virtual dispatch");
	std::cout << "Expected: two Woof lines, then two Meow lines" << std::endl;

	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	printSection("Deleting through Animal pointers");
	std::cout << "Expected: each Dog/Cat destroys its Brain before Animal destructor" << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];
}

static void	testDogCopy()
{
	printSection("Dog copy constructor");
	std::cout << "Expected: tmp has its own Brain and can be destroyed without affecting basic" << std::endl;

	Dog	basic;

	{
		Dog	tmp(basic);

		tmp.makeSound();
		std::cout << "Leaving tmp scope now" << std::endl;
	}
	std::cout << "basic is still usable after tmp was destroyed" << std::endl;
	basic.makeSound();

	printSection("Dog assignment operator");
	std::cout << "Expected: assigned replaces its Brain with a deep copy of basic" << std::endl;

	Dog	assigned;

	assigned = basic;
	assigned.makeSound();
}

static void	testCatCopy()
{
	printSection("Cat copy constructor");
	std::cout << "Expected: tmp has its own Brain and can be destroyed without affecting basic" << std::endl;

	Cat	basic;

	{
		Cat	tmp(basic);

		tmp.makeSound();
		std::cout << "Leaving tmp scope now" << std::endl;
	}
	std::cout << "basic is still usable after tmp was destroyed" << std::endl;
	basic.makeSound();

	printSection("Cat assignment operator");
	std::cout << "Expected: assigned replaces its Brain with a deep copy of basic" << std::endl;

	Cat	assigned;

	assigned = basic;
	assigned.makeSound();
}

int	main()
{
	testAnimalArray();
	testDogCopy();
	testCatCopy();
	printSection("End of ex01 tests");
	return (0);
}
