/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 02:15:07 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/31 00:27:49 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "PhoneBook.hpp"

class Contact {
	public:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string phone;
		std::string secret;
	
	public:
		void	set_contact(int index);
};

#endif