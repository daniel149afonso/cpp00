/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:31 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/06 20:10:04 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

int	is_space(std::string input)
{
	for (int i = 0; input[i]; i++)
	{
		if (!isspace(input[i]))
			return (0);
	}
	return (1);
}

void	check_numeric(bool *isNumeric, std::string tmp)
{
	for (int i = 0; tmp[i]; i++)
	{
		if (!std::isdigit(tmp[i]))
		{
			*isNumeric = false;
			break ;
		}	
	}
}

void	check_alpha(bool *isAlpha, std::string tmp)
{
	for (int i = 0; tmp[i]; i++)
	{
		if (!std::isalpha(tmp[i]))
		{
			*isAlpha = false;
			break ;
		}	
	}
}

std::string promptNonEmpty(const std::string& label)
{
	std::string input;
	while (true) {
		std::cout << label;
		if (!std::getline(std::cin, input)) {
			std::cout << "\nYou pressed ^D. Exiting…\n";
			std::exit(0);
		}
		if (input.empty() || is_space(input))
		{
			std::cout << RED "Wrong format\n" END;
			continue ;
		}
		bool isAlpha = true;
		bool isNumeric = true;
		if (label.find("phone") != std::string::npos)	
			check_numeric(&isNumeric, input);
		else if(label.find("phone") != std::string::npos)	
			check_numeric(&isNumeric, input);
		else
			check_alpha(&isAlpha, input);
		if (isAlpha == false || isNumeric == false)
		{
			std::cout << RED "Wrong format\n" END;
			continue ;
		}
		return (input);
	}
}

void PhoneBook::add_contact(Contact& contact)
{
	int i;

	i = this->len;
	this->contacts[i] = contact;
}

void PhoneBook ::remove_and_add(Contact& contact)
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
		this->add_contact(contact);
		this->len++;
	}
	else
		this->remove_and_add(contact);
	std::cout << GREEN "You have successfully added a new contact!" END << std::endl;
}