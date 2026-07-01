/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:08:02 by mipang            #+#    #+#             */
/*   Updated: 2026/04/12 17:22:12 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap nobody;
	ClapTrap bob("Bob");
	ClapTrap jim("Jim");

	std::cout << "\nBob starts with the easy part." << std::endl;
	bob.attack("Jim");
	jim.takeDamage(0);
	jim.takeDamage(4);
	jim.beRepaired(2);

	std::cout << "\nJim does not survive the second round." << std::endl;
	jim.takeDamage(20);
	jim.attack("Bob");
	jim.beRepaired(1);

	std::cout << "\nThe default one also joins for a second." << std::endl;
	nobody.attack("Bob");
	nobody.beRepaired(3);
	nobody.takeDamage(12);

	std::cout << "\nChecking copy and assignment before Bob runs out of energy." << std::endl;
	ClapTrap bob_copy(bob);
	nobody = bob_copy;
	nobody.attack("Jim");

	std::cout << "\nBob keeps going until the battery is empty." << std::endl;
	for (int i = 0; i < 11; i++)
		bob.attack("Jim");

	std::cout << std::endl;
	return 0;
}
