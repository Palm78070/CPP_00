/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:36:10 by rthammat          #+#    #+#             */
/*   Updated: 2023/03/17 00:10:52 by rath             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(void);
		void search_contact(void);

	private:
		Contact _contact[8];
		static int _count;
		int _get_index(void);
		void _add_input(int mode, std::string column);
		void _receive_input(std::string column, int valid_num, int valid_str, int mode);
		void _print_head();
		void _search_index();
};
#endif
