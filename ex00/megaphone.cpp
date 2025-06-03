/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:02:38 by daniel149af       #+#    #+#             */
/*   Updated: 2025/06/02 21:32:00 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string text1 = "shhhhh... I think the students are asleep...";
	std::string text2 = "Damnit";
	std::string text3 = " ! ";
	std::string text4 ="Sorry students, I thought this thing was off.";
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else if (argc == 2 && argv[1] == text1)
		std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n";
	else if (argc == 4 && argv[1] == text2 && argv[2] == text3
	&& argv[3] == text4)
	{
		std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n";
	}
	return (0);
}