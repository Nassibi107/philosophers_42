/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:57:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/03 15:08:12 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	err(int flag)
{
	if (flag == 0)
		write(2, "what ever!\n", 11);
	if (flag == 1)
		write(2, "memory problem !please clean your device\n", 17);
	if (flag == 2)
		write(2, "Creating threads Failed!\n", 26);
	if (flag == 3)
		write(2, "Joing threads Failed!\n", 23);
	if (flag == 4)
		write(2, "Program Failed!\n", 17);
	exit(EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	int		i;
	t_table	*table ;

	table = malloc(sizeof(t_table));
	if (!table)
		err(2);
	if (ac == 5 || ac == 6)
	{
		while (i < ac)
		{
			if (ft_isnumber(av[i]) == 1)
				checker_parcing(3);
			i++;
		}
		inicializada(table, ac, av);
		render_philos(table);
		if (!get_mtx(table))
			err(1);
		philo_has_running(table);
	}
	else
		printf("number of arg are notValid");
}
