/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:43:47 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 16:18:07 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <iostream>

class	Animal{
	protected:
		std::string	type;
	public:
		Animal();
		~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual	makeSound() const;
};

class	Dog:public Animal{
	public:
		void	makesound() const;
};

class	Cat:protected Animal{
	public:
		Cat();
		~Cat();
		Cat(const Dog& other);
		Cat&	operator=(const Dog& other);
		void	makesound();
};

#endif
