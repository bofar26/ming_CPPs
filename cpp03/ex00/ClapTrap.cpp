/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:18:08 by mipang            #+#    #+#             */
/*   Updated: 2026/04/14 22:21:54 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
{
	this -> name = name;
	this -> hit_points = 10;
	this -> energy_points = 10;
	this -> attack_damage = 0;
	std::cout << "ClapTrap " << name << " is created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap " << name << " is copied." << std::endl;
}
ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this -> name = other.name;
		this -> hit_points = other.hit_points;
		this -> energy_points = other.energy_points;
		this -> attack_damage = other.attack_damage;
	}
	std::cout << "ClapTrap " << name << " is assigned." << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (hit_points <= 0 || energy_points <= 0)
	{
		std::cout << "ClapTrap "<< name << " can not attack." << std::endl;
		return ;
	}

	energy_points --;

	std::cout << "ClapTrap "
		<< name
		<< " attacks, "
		<< target
		<<" causing "
		<< attack_damage
		<< " points of damage."
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "ClapTrap " << name << " is already destroyed." << std::endl;
		return ;
	}
	if (amount >= (unsigned int) hit_points)
		hit_points = 0;
	else
		hit_points -= amount;

	std::cout << "ClapTrap "
		<< name
		<< " takes "
		<< amount
		<< " damage. "
		<< hit_points
		<< " hit points remain."
		<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <=0 || energy_points <= 0)
	{
		std::cout << "ClapTrap " << name << " can not repaie. No energy." << std::endl;
		return ;
	}
	energy_points --;
	hit_points += amount;
	std::cout << "ClapTrap " << name << " has repaired " << amount << " points." << std::endl;
}
