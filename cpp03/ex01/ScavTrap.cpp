/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:20:26 by mipang            #+#    #+#             */
/*   Updated: 2026/04/14 21:59:44 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	this -> hit_points = 100;
	this -> energy_points = 50;
	this -> attack_damage =20;
	std::cout << "ScavTrap default is created." << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is destroyed." << std::endl;
}
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this -> hit_points = 100;
	this -> energy_points = 50;
	this -> attack_damage =20;
	std::cout << "ScavTrap " << name << " is created." << std::endl;
}
void	ScavTrap::attack(const std::string& target)
{
	if (hit_points <= 0 || energy_points <= 0)
	{
		std::cout << "ScavTrap "<< name << " can not attack." << std::endl;
		return ;
	}

	energy_points --;

	std::cout << "ScavTrap "
		<< name
		<< " attacks, "
		<< target
		<<" causing "
		<< attack_damage
		<< " points of damage."
		<< std::endl;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
