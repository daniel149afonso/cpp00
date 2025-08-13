/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 02:15:07 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/12 20:26:43 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define END		"\033[0m"

class Contact {
	private:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string phone;
		std::string secret;
	public:
		void	set_contact(void);
		std::string get_value(std::string field);
};

std::string promptNonEmpty(const std::string& label);
void check_numeric(bool *isNumeric, std::string tmp);
void check_alpha(bool *isAlpha, std::string tmp);
int	is_space(std::string input);

#endif