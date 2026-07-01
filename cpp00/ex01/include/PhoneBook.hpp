/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 22:21:12 by mipang            #+#    #+#             */
/*   Updated: 2025/12/01 18:30:44 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <string>

class Contact{
	private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string darkest_secret;
	std::string phonenumber;
	public:
	void	set_firstname(const std::string &s);
	void	set_lastname(const std::string &s);
	void	set_nickname(const std::string &s);
	void	set_darkest_secret(const std::string &s);
	void	set_phonenumber(const std::string &s);
	const std::string	&get_firstname() const;
	const std::string	&get_lastname() const;
	const std::string	&get_nickname() const;
	const std::string	&get_darkest_secret() const;
	const std::string	&get_phonenumber() const;
};

class Phonebook{
	private:
	Contact contacts[8];
	int count;
	public:
	Phonebook();
	void	addcontact();
	void	search() const;
	void	print_row(int i) const;
	void	print_all(int i) const;
};

#endif
