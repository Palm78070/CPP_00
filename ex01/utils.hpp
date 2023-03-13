/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:37:37 by rthammat          #+#    #+#             */
/*   Updated: 2023/03/13 14:37:59 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

std::string	str_toupper(std::string s);
int	valid_phone_number(std::string str);
int	is_all_digit(std::string str);
int	is_all_alpha(std::string str);
std::string	truncate_and_replace(std::string str, int size);

#endif
