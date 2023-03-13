/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:32:11 by rthammat          #+#    #+#             */
/*   Updated: 2023/03/13 14:38:34 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_upper(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return;
	while (s[i])
		std::cout << (char)toupper(s[i++]);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc >= 2)
	{
		while (++i <= argc - 1)
			print_upper(argv[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
