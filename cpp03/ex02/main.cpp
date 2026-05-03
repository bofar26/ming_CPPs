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
    std::cout << "----- Construction -----" << std::endl;
    FragTrap a("Alice");

    std::cout << "\n----- Basic actions -----" << std::endl;
    a.attack("enemy");
    a.takeDamage(20);
    a.beRepaired(10);

    std::cout << "\n----- Special ability -----" << std::endl;
    a.highFivesGuys();

    std::cout << "\n----- Copy test -----" << std::endl;
    FragTrap b(a);
    FragTrap c;
    c = a;

    std::cout << "\n----- End of program -----" << std::endl;
    return 0;
}
