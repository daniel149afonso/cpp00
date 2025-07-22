/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:57:39 by daniel149af       #+#    #+#             */
/*   Updated: 2025/06/03 21:58:05 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Book {
	public:
	int ra;
		Book(int year){
			std::cout << year << "\n";
		}
};

int	main(void)
{
	Book Naruto(1999);
	return (0);
}