/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:08:02 by mipang            #+#    #+#             */
/*   Updated: 2026/04/14 19:13:58 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap unnamed;
	ScavTrap serena("Serena");
	ScavTrap keeper("Keeper");

	std::cout << "\nSerena checks the front door." << std::endl;
	serena.attack("a rusty ClapTrap");
	serena.takeDamage(34);
	serena.beRepaired(10);
	serena.guardGate();

	std::cout << "\nKeeper has a shorter day." << std::endl;
	keeper.guardGate();
	keeper.attack("a loud visitor");
	keeper.takeDamage(120);
	keeper.attack("anyone");
	keeper.beRepaired(20);

	std::cout << "\nCopies should still know how to guard." << std::endl;
	ScavTrap copy(serena);
	unnamed = copy;
	unnamed.guardGate();
	unnamed.attack("a loose screw");
	unnamed.takeDamage(15);

	std::cout << "\nSerena's copy spends all remaining energy on the gate." << std::endl;
	for (int i = 0; i < 50; i++)
		copy.attack("the gate");

	std::cout << std::endl;
	return 0;
}
