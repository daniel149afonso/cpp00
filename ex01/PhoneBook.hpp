/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:31:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/02 18:25:37 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Contact.hpp"
# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define END		"\033[0m"

class PhoneBook {
	
	private:
		Contact	contacts[8];
	public:
		int		len;

	public:
		void	set_informations(void);
		void	get_informations(void);
		void	add_contact(Contact& contact);
		void	remove_and_add(Contact& contact);
		void	display_contact(int index);
};

#endif