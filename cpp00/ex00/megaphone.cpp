/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:16:23 by mipang            #+#    #+#             */
/*   Updated: 2025/12/02 14:16:25 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	unsigned char	c;
	int	i,j;

	if (argc < 2)
	{
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
		return (1);
	}
	for (i = 1; i < argc; ++i)
	{
		for (j = 0; argv[i][j] != '\0'; ++j)
		{
			c = static_cast<unsigned char>(argv[i][j]);
			std :: cout << static_cast<char>(std :: toupper(c));
		}
	}
	std :: cout << std :: endl;
	return (0);
}

