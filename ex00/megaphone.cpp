/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:02:38 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/13 17:54:46 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string result = argv[i];
			for (int j = 0; j < (int)result.size(); j++)
			{
				std::cout << (char)std::toupper(result[j]);
			}
			if (argv[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
