/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:07:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/06 15:08:55 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	error_parsing(int mode)
{
	write(2, "Error\n", 6);
	if (mode == 0)
		write(2, "Invalid Argument!\n", 19);
	if (mode == 1)
		write(2, "You depassed integers try 0 < n < INT_MAX!\n", 44);
	if (mode == 2)
		write(2, "Emm something smells fishy! Try AGAIN\n", 39);
	if (mode == 3)
		write(2, "Numbers not valid\n", 19);
	exit(EXIT_FAILURE);
}


void	checker_parcing(int flag)
{
	write(2, "Error\n", 6);
	if (flag == 0)
		write(2, "Invalid Argument!\n", 19);
	else if (flag == 1)
		write(2, "You depassed integers try 0 < n < INT_MAX!\n", 44);
	else if (flag == 2)
		write(2, "Emm something smells fishy! Try AGAIN\n", 39);
	else if (flag == 3)
		write(2, "Numbers not valid\n", 19);
	exit(1);
}
