/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_Book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:36:15 by daniel149af       #+#    #+#             */
/*   Updated: 2025/06/05 02:48:59 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_Book.hpp"

void	print_contact(Contact contact1)
{
	std::cout << contact1.name << "\n";
	std::cout << contact1.surname << "\n";
	std::cout << contact1.nickname << "\n";
	std::cout << contact1.phone << "\n";
	std::cout << contact1.secret << "\n";
}

void	add_before(PhoneBook& book, Contact contact, int len)
{
	if (len == 0)
	{
		book.str[0] = contact;
	}
	else
	{
		
		int i = len--;
		while (i > 0)
		{
			i--;
		}
		
	}
}

void	add_contact(PhoneBook& book, int *len)
{
	Contact contact;
	int i = 0;

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
	if (*len != 8)
	{
		add_before(book, contact, *len);
		*len++;
	}
	else
	{
		//remove_add_before();
	}
	
	
	book.str[0] = contact;
	//print_contact(book.str[0]);
}

void	search_contact()
{
	return ;
}

int	main(void)
{
	int len = 0;
	PhoneBook book;
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string exit = "EXIT";
	std::string input;
	while (1)
	{
		std::cin >> input;
		if (input == add)
		{
			add_contact(book, &len);
			print_contact(book.str[0]);
		}
		if (input == search)
			search_contact();
		if (input == exit)
			break ;
	}
	return (0);
}