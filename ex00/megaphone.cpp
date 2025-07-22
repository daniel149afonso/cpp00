/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:02:38 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/22 19:37:09 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

void	ft_uppercase(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 32;
			j++;
		}
		std::cout << argv[i];
		i++;
		if (argv[i])
			std::cout << " ";
	}
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	std::string text1 = "shhhhh... I think the students are asleep...";
	std::string text2 = "Damnit";
	std::string text3 = " ! ";
	std::string text4 = "Sorry students, I thought this thing was off.";

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		ft_uppercase(argv);
	}
	return (0);
}
