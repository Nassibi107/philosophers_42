/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:44:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/03 14:57:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	size_t	rst;

	s = 1;
	rst = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			s *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		rst *= 10;
		rst += str[i] - '0';
		i++;
	}
	return (rst * s);
}

void	ft_fill_arr(int *arr, int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < ac - 1)
		arr[i++] = ft_atoi(av[j++]);
}

int	inicializada(t_table *table, int ac, char *av[])
{
	int	i;
	int	*arr;

	arr = malloc(sizeof(int) * (ac - 1));
	if (!arr)
		return (0);
	ft_fill_arr(arr, ac, av);
	i = 0;
	table->nbr_of_pls = arr[i++];
	table->ttd = arr[i++];
	table->tte = arr[i++];
	table->tts = arr[i++];
	table->table_destroy = 0;
	if (ac == 6)
	{
		table->tpe = arr[i++];
		table->nbr_of_re = (i - 5);
	}
	else
	{
		table->tpe = -1;
		table->tpe = arr[++i];
	}
	return (1);
}
