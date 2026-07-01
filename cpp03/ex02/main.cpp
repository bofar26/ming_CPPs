/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:08:02 by mipang            #+#    #+#             */
/*   Updated: 2026/04/17 20:40:02 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap alice("Alice");
	FragTrap default_frag;

	std::cout << "\nAlice warms up." << std::endl;
	alice.attack("training dummy");
	alice.takeDamage(42);
	alice.beRepaired(12);
	alice.highFivesGuys();

	std::cout << "\nThe default FragTrap gets a turn too." << std::endl;
	default_frag.attack("old target");
	default_frag.takeDamage(99);
	default_frag.beRepaired(1);
	default_frag.highFivesGuys();

	std::cout << "\nCopying Alice before trying a rougher hit." << std::endl;
	FragTrap twin(alice);
	FragTrap spare;

	spare = twin;
	spare.attack("another dummy");
	spare.highFivesGuys();

	std::cout << "\nA heavy hit should stop Alice from doing anything else." << std::endl;
	alice.takeDamage(200);
	alice.attack("one last dummy");
	alice.beRepaired(50);
	alice.highFivesGuys();

	std::cout << "\nTwin still has enough energy for a few more swings." << std::endl;
	for (int i = 0; i < 5; i++)
		twin.attack("practice wall");

	std::cout << std::endl;
	return 0;
}
