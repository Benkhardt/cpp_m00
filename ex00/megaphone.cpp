/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:41:30 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/21 13:37:07 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv){
	int i, j;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEREABLE FEEDBACK NOISE *" << std::endl;
		return (0);	
	}
	for (i = 1 ; i < argc ; i++)
	{
		j = 0;
		while (argv[i][j])
			std::cout << char(toupper(argv[i][j++]));
	}
	std::cout << std::endl;
	return (0);
}
