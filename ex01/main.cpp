/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:36:15 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/31 00:44:56 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	
	PhoneBook	book;
	bool		running = true;
	std::string	input;

	book.len = 0;
	std::cout << "Welcome my friend, you can use [ADD], [SEARCH] and [EXIT]:"<< std::endl << std::endl;
	while (running && std::getline(std::cin, input))
	{
		if (std::cin.eof() == true)
		{
			std::cout << "You have pressed ^D. Exiting..." << std::endl;
			exit(0);
		}
		if (input.compare("ADD") == 0)
			book.set_informations();
		else if (input.compare("SEARCH") == 0)
			search_contact(book);
		else if (input.compare("EXIT") == 0)
		{	
			running = false;
			std::cout << "Thanks for all, goodbye!"<< std::endl;
		}
		else
			std::cout << RED "Please enter only [ADD], [SEARCH] or [EXIT]" END << std::endl;
	}
	return (0);
}
