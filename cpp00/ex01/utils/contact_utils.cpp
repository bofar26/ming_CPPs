/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:08:19 by mipang            #+#    #+#             */
/*   Updated: 2025/12/01 18:08:21 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::set_firstname(const std::string &s)
{
	first_name = s;
}

void	Contact::set_lastname(const std::string &s)
{
	last_name = s;
}
void	Contact::set_nickname(const std::string &s)
{
	nick_name = s;
}

void	Contact::set_darkest_secret(const std::string &s)
{
	darkest_secret = s;
}

void	Contact::set_phonenumber(const std::string &s)
{
	phonenumber = s;
}
const std::string	&Contact::get_firstname() const
{
	return (first_name);
}

const std::string	&Contact::get_lastname() const
{
	return (last_name);
}

const std::string	&Contact::get_nickname() const
{
	return (nick_name);
}

const std::string	&Contact::get_darkest_secret() const
{
	return (darkest_secret);
}

const std::string	&Contact::get_phonenumber() const
{
	return (phonenumber);
}
