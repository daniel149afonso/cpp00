/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:31 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/30 19:04:02 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	is_space(std::string input)
{
	for (int i = 0; input[i]; i++)
	{
		if (!isspace(input[i]))
			return (0);
	}
	return (1);
}

void	add_contact(Contact contact)
{
	int i;

	i = this->len;
	this->contacts[i] = contact;
}

void	remove_and_add(Contact contact)
{
	this->contacts[0] = this->contacts[1];
	this->contacts[1] = this->contacts[2];
	this->contacts[2] = this->contacts[3];
	this->contacts[3] = this->contacts[4];
	this->contacts[4] = this->contacts[5];
	this->contacts[5] = this->contacts[6];
	this->contacts[6] = this->contacts[7];
	this->contacts[7] = contact;
	std::cout << "The phone book is full. We removed the last contact."
	<< std::endl;
}

std::string promptNonEmpty(const std::string& label)
{
	std::string tmp;
	while (true) {
		std::cout << label;
		if (!std::getline(std::cin, tmp)) {
			std::cout << "\nYou pressed ^D. Exiting…\n";
			std::exit(0);
		}
		if (!tmp.empty() && !is_space(tmp))
			return (tmp);
	}
}

void PhoneBook ::set_informations(void)
{
	Contact contact;

	contact.name     = promptNonEmpty("first name: ");
	contact.surname  = promptNonEmpty("surname:    ");
	contact.nickname = promptNonEmpty("nickname:   ");
	contact.phone    = promptNonEmpty("phone:      ");
	contact.secret   = promptNonEmpty("secret:     ");
	if (this->len < 8)
	{
		add_contact(contact);
		this->len++;
	}
	else
		remove_and_add(contact);
	std::cout << GREEN "You have successfully added a new contact!" END << std::endl;
}