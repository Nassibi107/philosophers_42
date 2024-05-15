/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:07:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/13 12:16:00 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"


void	checker_parcing(int flag)
{
	write(2, "!----{_ERROR_}-----!\n", 21);
	if (flag == 0)
		write(2, "what ever!\n", 11);
	if (flag == 1)
		write(2, "memory problem please clean your device\n", 16);
	if (flag == 2)
		write(2, "Creating threads Failed!\n", 26);

	if (flag == 3)
	{
		write(2, "check if {{number}} \n! ", 22);
		write(2,"it must be in [0, 2222222]\n",28);
		write(2,"aren't digits\n",12);
	}
	if (flag == 6)
		write(2, "Joing threads Failed!\n", 23);
	if (flag == 4)
		write(2, "Program Failed!\n", 17);
	if (flag == 5)
		write(2, "Creating Mutex Failed!\n", 24);
	exit(1);
}
