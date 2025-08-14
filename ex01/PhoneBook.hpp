/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:31:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/14 16:54:06 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Contact.hpp"

class PhoneBook {

	private:
		Contact	contacts[8];
		int	len;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	set_informations(void);
		void	get_informations(void);
		void	add_contact(Contact& contact);
		void	remove_and_add(Contact& contact);
		void	display_contact(int index);
		void	display_all_contacts(void);
		void	display_contact_summary(int index);
		void	display_contact_full(int index);
};

#endif
