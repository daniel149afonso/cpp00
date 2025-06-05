/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_Book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:31:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/06/04 19:37:27 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include <iostream>

class Contact {
	public:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phone;
	std::string secret;
};

class PhoneBook {
	public:
	Contact str[8];
};
#endif