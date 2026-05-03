/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:43:47 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:31:34 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <iostream>
#include "Wrong"

class	Animal{
	protected:
		std::string	type;
	public:
		Animal(const std::string& type);
		virtual	~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual	void	makeSound() const;
};

class	Dog:public Animal{
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		void	makeSound() const;
};

class	Cat:public Animal{
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		void	makeSound() const;
};

#endif

