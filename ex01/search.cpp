/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:57:43 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/14 16:55:53 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

//Créer la cellule de contact
std::string format_cell(std::string str)
{
	int len;
	std::string result(10, ' ');

	len = str.length();
	if (len > 10)
	{
		for (int i = 0; i < 10; i++)
			result[i] = str[i];
		result[9] = '.';
	}
	else if (len == 10)
	{
		for (int i = 0; i < 10; i++)
			result[i] = str[i];
	}
	else
	{
		int spaces = 10 - len;
		int i = 0;
		int j = 0;
		while (i < spaces)
			result[i++] = ' ';
		while (j < len)
			result[i++] = str[j++];
	}
	return (result);
}

// Affiche seulement un résumé du contact
void PhoneBook::display_contact_summary(int index)
{
	std::cout
		<< "|" << "         " << index
		<< "|" << format_cell(this->contacts[index].get_value("name"))
		<< "|" << format_cell(this->contacts[index].get_value("surname"))
		<< "|" << format_cell(this->contacts[index].get_value("nickname"))
		<< "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

// Affiche toutes les infos du contact
void PhoneBook::display_contact_full(int index)
{
	std::cout << "Index:    " << index << "\n";
	std::cout << "Name:     " << this->contacts[index].get_value("name") << "\n";
	std::cout << "Surname:  " << this->contacts[index].get_value("surname") << "\n";
	std::cout << "Nickname: " << this->contacts[index].get_value("nickname") << "\n";
	std::cout << "Phone:    " << this->contacts[index].get_value("phone") << "\n";
	std::cout << "Secret:   " << this->contacts[index].get_value("secret") << "\n";
}

void PhoneBook::display_all_contacts()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->len; i++)
		display_contact_summary(i);
}

void PhoneBook::get_informations(void)
{
	std::string input;
	int index;

	display_all_contacts();
	std::cout << "Choose your contact index (size: " << this->len << "): " << std::endl;
	while (true)
	{
		if (!std::getline(std::cin, input))
		{
			std::cout << "\nYou pressed ^D. Exiting…\n";
			std::exit(0);
		}
		if (!input.empty())
			break;
	}
	for (int i = 0; input[i]; i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << RED "Please enter numeric characters." END << std::endl;
			return;
		}
	}
	index = std::atoi(input.c_str());
	if (index >= this->len || index < 0)
	{
		std::cout << RED "The index " << index << " does not exist." END << std::endl;
		return;
	}
	std::cout << "\n--- Contact Details ---\n";
	display_contact_full(index);
}

