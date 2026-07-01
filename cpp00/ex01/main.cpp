/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 22:21:01 by mipang            #+#    #+#             */
/*   Updated: 2025/11/23 21:52:39 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	Phonebook pb;
	std::string	cmd;

	pb = Phonebook();
	while (true)
	{
		std::cout << "Please enter command: ADD, SEARCH, EXIT.\n" ;
		if (!std::getline(std::cin, cmd))
			break ;
		if (cmd == "ADD")
			pb.addcontact();
		else if (cmd == "SEARCH")
			pb.search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Command not valid\n";
	}
	return (0);
}
