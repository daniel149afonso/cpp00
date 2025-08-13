/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:19:00 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/13 14:28:32 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_contact(void)
{
	this->name     = promptNonEmpty("first name: ");
	this->surname  = promptNonEmpty("surname:    ");
	this->nickname = promptNonEmpty("nickname:   ");
	this->phone    = promptNonEmpty("phone:      ");
	this->secret   = promptNonEmpty("secret:     ");
}

std::string Contact::get_value(const std::string field)
{
	if (field == "name")
		return (this->name);
	else if (field == "surname")
		return (this->surname);
	else if (field == "nickname")
		return (this->nickname);
	else if (field == "phone")
		return (this->phone);
	else if (field == "secret")
		return (this->secret);
	else 
		return (NULL);
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
