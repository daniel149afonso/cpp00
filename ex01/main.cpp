/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:36:15 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/28 03:50:23 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
}

void	add_contact(PhoneBook& book)
{
	Contact contact;

	std::cout << "first name: ";
	std::cin >> contact.name;
	std::cout << "surname: ";
	std::cin >> contact.surname;
	std::cout << "nickname: ";
	std::cin >> contact.nickname;
	std::cout << "phone: ";
	std::cin >> contact.phone;
	std::cout << "secret: ";
	std::cin >> contact.secret;

	if (book.len < 8)
	{
		add(book, contact);
		(book.len)++;
	}
	else
		remove_add(book, contact);
}

void	search_contact(PhoneBook book)
{
	std::string	input;
	int			index;

	std::cout << "Choose your contact index: " << std::endl;
	std::cin >> input;
	for (int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Please enter numeric characters." << std::endl;
			return ;
		}
	}
	index = atoi(input.c_str());
	if (index >= book.len || index < 0)
	{
		std::cout << "The index " << index << " does not exist." << std::endl;
		return ;
	}

	std::cout << "|" << "----------" << "|" << "----------" << "|" << "----------" <<  "|" << "----------" << "|" << std::endl;
	std::cout << "|" << "     Index" << "|" << "      Name" << "|" << "   Surname" <<  "|" << "  Nickname" << "|" << std::endl;
	std::cout << "|" << "         " << index << "|" << "----------" << "|" << "----------" <<  "|" << "----------" << "|" << std::endl;
	std::cout << index << std::endl;
}

int	main(void)
{
	
	PhoneBook book;
	book.len = 0;
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string exit = "EXIT";
	std::string input;

	std::cout << "Welcome, you can use [ADD], [SEARCH] and [EXIT]."<< std::endl << std::endl;
	while (1)
	{
		std::cin >> input;
		if (input == add)
			add_contact(book);
		if (input == search)
			search_contact(book);
		if (input == "debug")
		{
			std::cout << "value debug: " << book.len << std::endl;
			for (int i = 0; i < book.len; i++)
			{
				std::cout << "Index: " << i;
				print_contact(book.str[i]);
			}
		}
		if (input == exit)
			break ;
	}
	return (0);
}
