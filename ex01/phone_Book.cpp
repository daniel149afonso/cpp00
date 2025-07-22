/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_Book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:36:15 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/22 21:12:53 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_Book.hpp"

void	print_contact(Contact contact1)
{
	std::cout << contact1.name << std::endl;
	std::cout << contact1.surname << std::endl;
	std::cout << contact1.nickname << std::endl;
	std::cout << contact1.phone << std::endl;
	std::cout << contact1.secret << std::endl;
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
	if (*len < 8)
	{
		add_before(book, contact, *len);
		len++;
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
