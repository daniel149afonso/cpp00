/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_Book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:36:15 by daniel149af       #+#    #+#             */
/*   Updated: 2025/06/04 17:18:35 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
	public:
	std
};

class PhoneBook {
	public:
	Contact str[8];
};

void	add_contact(void)
{
	std::string name;
	// std::string surname;
	// std::string nickname;
	// std::string phone;
	// std::string secret;

	std::cout << "first name: ";
	std::cin >> name;
	std::cout << name << "\n";
}
int	main(int argc, char **argv)
{
	std::string add = "ADD";
	if (argc == 2 && argv[1] == add)
		add_contact();
	return (0);
}