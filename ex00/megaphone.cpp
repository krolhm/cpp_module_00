/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:57:14 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/03 17:18:24 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int j = 1; j < argc; j++)
	{
		for (int i = 0; i < (int)std::strlen(argv[j]); i++)
		{
			argv[j][i] = std::toupper(argv[j][i]);
		}
		std::cout << argv[j];
	}
	std::cout << std::endl;
	return (0);
}