/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:57:43 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/31 00:45:02 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

std::string	format_cell(std::string str)
{
	int			len;
	std::string	result(10, ' ');

	len = str.length();
	if (len > 10)
	{
		for (int i = 0; i < 10; i++)
		{
			result[i] = str[i];
		}
		result[9] = '.';
	}
	else if (len == 10)
	{
		for (int i = 0; i < 10; i++)
		{
			result[i] = str[i];
		}
	}
	else
	{
		int	spaces = 10 - len;
		int	i = 0;
		int	j = 0;
		while (i < spaces)
		{
			result[i++] = ' ';
		}
		while (j < len)
		{
			result[i] = str[j];
			i++;
			j++;
		}
	}
	return (result);
}

void	display_contact(PhoneBook book, int index)
{
	std::cout
	<< "|" << "         " << index
	<< "|" << format_cell(book.contacts[index].name)
	<< "|" << format_cell(book.contacts[index].surname)
	<< "|" << format_cell(book.contacts[index].nickname)
	<< "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	search_contact(PhoneBook book)
{
	std::string	input;
	int			index;

	std::cout << "Choose your contact index :" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof() == true)
	{
		std::cout << "\nYou have pressed ^D. Exiting…" << std::endl;
		std::exit(0);
	}
	for (int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << RED "Please enter numeric characters (without space)." END << std::endl;
			return ;
		}
	}
	index = atoi(input.c_str());
	if (index >= book.len || index < 0)
	{
		std::cout << RED "The index " << index << " does not exist." END << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	display_contact(book, index);
}

void	PhoneBook::get_informations()
{
	
}