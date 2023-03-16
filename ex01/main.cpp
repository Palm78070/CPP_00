/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:36:32 by rthammat          #+#    #+#             */
/*   Updated: 2023/03/17 00:11:25 by rath             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	main(void)
{
	std::string str;
	PhoneBook phonebook;

	str = "";
	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, str);
		if (str_toupper(str) == "EXIT" || !std::cin)
			break;
		if (str == "")
			continue;
		else if (str_toupper(str) == "ADD")
			phonebook.add_contact();
		else if (str_toupper(str) == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
