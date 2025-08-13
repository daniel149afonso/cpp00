/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:31 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/13 03:50:29 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook():len(0)
{

}

PhoneBook::~PhoneBook(void)
{
	return ;
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

	contact.set_contact();
	if (this->len < 8)
	{
		this->add_contact(contact);
		this->len++;
	}
	else
		this->remove_and_add(contact);
	std::cout << GREEN "You have successfully added a new contact!" END << std::endl;
}