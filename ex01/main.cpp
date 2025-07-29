/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:36:15 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/29 20:18:09 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	is_space(std::string input)
{
	for (int i = 0; input[i]; i++)
	{
		if (!isspace(input[i]))
			return (0);
	}
	return (1);
}

void	print_contact(Contact contact1)
{
	std::cout << contact1.name << std::endl;
	std::cout << contact1.name << std::endl;
	std::cout << contact1.surname << std::endl;
	std::cout << contact1.nickname << std::endl;
	std::cout << contact1.phone << std::endl;
	std::cout << contact1.secret << std::endl;
}


void	add(PhoneBook& book, Contact contact)
{
	int i;

	i = book.len;
	book.str[i] = contact;
}

void	remove_add(PhoneBook& book, Contact contact)
{
	book.str[0] = book.str[1];
	book.str[1] = book.str[2];
	book.str[2] = book.str[3];
	book.str[3] = book.str[4];
	book.str[4] = book.str[5];
	book.str[5] = book.str[6];
	book.str[6] = book.str[7];
	book.str[7] = contact;
	std::cout << "The phone book is full. We removed the last contact."
	<< std::endl;
}

void	add_contact(PhoneBook& book)
{
	Contact contact;

	while (true)
	{
		std::cout << "first name: ";
		std::getline(std::cin, contact.name);
		if (contact.name.empty() || is_space(contact.name))
			continue ;
		std::cout << "surname: ";
		std::getline(std::cin, contact.surname);
		if (contact.surname.empty() || is_space(contact.surname))
			continue ;
		std::cout << "nickname: ";
		std::getline(std::cin, contact.nickname);
		if (contact.nickname.empty() || is_space(contact.nickname))
			continue ;
		std::cout << "phone: ";
		std::getline(std::cin, contact.phone);
		if (contact.phone.empty() || is_space(contact.phone))
			continue ;
		std::cout << "secret: ";
		std::getline(std::cin, contact.secret);
		if (contact.secret.empty() || is_space(contact.secret))
			continue ;
		break ;
	}
	if (book.len < 8)
	{
		add(book, contact);
		(book.len)++;
	}
	else
		remove_add(book, contact);
	std::cout << "You have successfully added a new contact!"
	<< std::endl;
}

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
	<< "|" << format_cell(book.str[index].name)
	<< "|" << format_cell(book.str[index].surname)
	<< "|" << format_cell(book.str[index].nickname)
	<< "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	search_contact(PhoneBook book)
{
	std::string	input;
	int			index;

	std::cout << "Choose your contact index: " << std::endl;
	std::getline(std::cin, input);
	for (int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Please enter numeric characters (without space)." << std::endl;
			return ;
		}
	}
	index = atoi(input.c_str());
	if (index >= book.len || index < 0)
	{
		std::cout << "The index " << index << " does not exist." << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	display_contact(book, index);
}

int	main(void)
{
	
	PhoneBook	book;
	bool		running = true;
	std::string	input;

	book.len = 0;
	std::cout << "Welcome my friend, you can use [ADD], [SEARCH] and [EXIT]:"<< std::endl << std::endl;
	while (running && std::getline(std::cin, input))
	{
		if (input.compare("ADD") == 0)
			add_contact(book);
		else if (input.compare("SEARCH") == 0)
			search_contact(book);
		else if (input == "debug")
		{
			std::cout << "value debug: " << book.len << std::endl;
			for (int i = 0; i < book.len; i++)
			{
				std::cout << "Index: " << i;
				print_contact(book.str[i]);
			}
		}
		else if (input.compare("EXIT") == 0)
		{	
			running = false;
			std::cout << "Thanks for all, goodbye!"<< std::endl;
		}
		else
			std::cout << "Please enter only [ADD], [SEARCH] or [EXIT]" << std::endl;
	}
	return (0);
}
