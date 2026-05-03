/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:46:31 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 16:33:20 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Animal::Animal(std::string type)
{
	return (this -> type);
}
		virtual	~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual	void	makeSound() const;
