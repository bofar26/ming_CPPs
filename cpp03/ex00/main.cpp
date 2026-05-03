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

#include "ClapTrap.hpp"

int main()
{
    std::cout << "=== Creating ClapTraps ===" << std::endl;
    ClapTrap hero("Hero");
    ClapTrap enemy("Enemy");

    std::cout << "\n=== Basic Attack ===" << std::endl;
    hero.attack("Enemy");
    enemy.takeDamage(0);

    std::cout << "\n=== Multiple Attacks ===" << std::endl;
    hero.attack("Enemy");
    hero.attack("Enemy");
    hero.attack("Enemy");

    std::cout << "\n=== Enemy Takes Damage ===" << std::endl;
    enemy.takeDamage(5);
    enemy.takeDamage(10);

    std::cout << "\n=== Try Attacking When Dead ===" << std::endl;
    enemy.attack("Hero");

    std::cout << "\n=== Repair Test ===" << std::endl;
    hero.beRepaired(3);
    hero.beRepaired(5);

    std::cout << "\n=== Energy Exhaustion Test ===" << std::endl;
    for (int i = 0; i < 15; i++)
        hero.attack("Enemy");

    std::cout << "\n=== End of Test ===" << std::endl;

    return 0;
}
