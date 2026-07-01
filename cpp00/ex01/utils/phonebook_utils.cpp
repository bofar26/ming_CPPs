/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:16:40 by mipang            #+#    #+#             */
/*   Updated: 2025/12/02 14:16:42 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string trim10(const std::string &s) {
	if (s.size() > 10) return s.substr(0, 9) + ".";
	return s;
}

static bool has_non_space(const std::string &s) {
	for (size_t i = 0; i < s.size(); ++i) {
		unsigned char c = static_cast<unsigned char>(s[i]);
		if (c != ' ' && c != '\t' && c != '\r' && c != '\n') return true;
	}
	return false;
}

static std::string get_non_empty(const std::string &prompt) {
	std::string in;
	for (;;) {
		std::cout << prompt;
		if (!std::getline(std::cin, in)) std::exit(1);
		if (has_non_space(in)) return in;
		std::cout << "Field cannot be empty. Please try again.\n";
	}
}

Phonebook::Phonebook() : count(0) {}

void Phonebook::addcontact() {
	Contact c;
	c.set_firstname(get_non_empty("First Name: "));
	c.set_lastname(get_non_empty("Last Name: "));
	c.set_nickname(get_non_empty("Nick Name: "));
	c.set_darkest_secret(get_non_empty("Darkest secret: "));
	c.set_phonenumber(get_non_empty("Phone Number: "));
	contacts[count % 8] = c;
	count++;
	std::cout << "Saved.\n";
}

void Phonebook::print_row(int i) const {
	const Contact &c = contacts[i];
	std::cout << std::setw(10) << i << "|";
	std::cout << std::setw(10) << trim10(c.get_firstname()) << "|";
	std::cout << std::setw(10) << trim10(c.get_lastname()) << "|";
	std::cout << std::setw(10) << trim10(c.get_nickname()) << "|\n";
}

void Phonebook::print_all(int i) const {
	const Contact &c = contacts[i];
	std::cout << "First Name:" << c.get_firstname() << "\n";
	std::cout << "Last Name:" << c.get_lastname() << "\n";
	std::cout << "Nick Name:" << c.get_nickname() << "\n";
	std::cout << "Darkest secret:" << c.get_darkest_secret() << "\n";
	std::cout << "Phone Number:" << c.get_phonenumber() << "\n";
}

void Phonebook::search() const {
	int total = (count < 8) ? count : 8;

	std::cout << "Search :\n";
	if (total == 0) {
		std::cout << "PhoneBook is empty.\n";
		return;
	}

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|\n";

	for (int i = 0; i < total; ++i) print_row(i);

	std::cout << "Please choose index: ";
	std::string line;
	if (!std::getline(std::cin, line)) {
		std::cout << "Invalid Input.\n";
		return;
	}

	size_t b = line.find_first_not_of(" \t\r\n");
	size_t e = line.find_last_not_of(" \t\r\n");
	if (b == std::string::npos) {
		std::cout << "Invalid Input. Try again.\n";
		return;
	}
	line = line.substr(b, e - b + 1);

	for (size_t k = 0; k < line.size(); ++k) {
		if (!std::isdigit(static_cast<unsigned char>(line[k]))) {
			std::cout << "Invalid Input. Try again.\n";
			return;
		}
	}

	int index = std::atoi(line.c_str());
	if (index < 0 || index >= total) {
		std::cout << "Out of range.\n";
		return;
	}
	print_all(index);
}
