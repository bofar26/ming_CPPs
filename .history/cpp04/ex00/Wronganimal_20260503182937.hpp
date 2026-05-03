/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:29:21 by mipang            #+#    #+#             */
/*   Updated: 2026/05/03 18:29:37 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

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
