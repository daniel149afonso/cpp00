/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:31:21 by daniel149af       #+#    #+#             */
/*   Updated: 2025/07/28 20:47:19 by daniel149af      ###   ########.fr       */
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
	public:
	int		len;
	Contact	str[8];
};
#endif