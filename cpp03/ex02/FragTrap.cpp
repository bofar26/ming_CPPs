/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:34:34 by mipang            #+#    #+#             */
/*   Updated: 2026/04/17 20:55:17 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	this -> hit_points = 100;
	this -> energy_points = 100;
	this -> attack_damage = 30;
	std::cout << "ScavTrap default is created." << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is destroyed." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this -> hit_points = 100;
	this -> energy_points = 100;
	this -> attack_damage =30;
	std::cout << "FragTrap " << name << " is created." << std::endl;
}
FragTrap::FragTrap(const FragTrap& other) :ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << name << " is copied." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		this -> name = other.name;
		this -> hit_points = other.hit_points;
		this -> energy_points = other.energy_points;
		this -> attack_damage = other.attack_damage;
	}
	std::cout << "FragTrap " << name << " is assigned." << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this-> name
		<< " requests a positive high five!" << std::endl;
}
