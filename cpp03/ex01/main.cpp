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
	std::cout << "----- Default constructor test -----" << std::endl;
	ScavTrap a;

	std::cout << "\n----- Parameter constructor test -----" << std::endl;
	ScavTrap b("Serena");

	std::cout << "\n----- Attack test -----" << std::endl;
	b.attack("enemy");

	std::cout << "\n----- GuardGate test -----" << std::endl;
	b.guardGate();

	std::cout << "\n----- Copy constructor test -----" << std::endl;
	ScavTrap c(b);

	std::cout << "\n----- Assignment operator test -----" << std::endl;
	ScavTrap d;
	d = b;

	std::cout << "\n----- Multiple attacks (energy test) -----" << std::endl;
	for (int i = 0; i < 55; i++)
		b.attack("target");

	std::cout << "\n----- End of program -----" << std::endl;
	return 0;
}
