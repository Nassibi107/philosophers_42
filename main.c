/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:57:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/02 15:08:47 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


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


int main (int ac, char **av)
{
	t_table *table ;
	table = malloc(sizeof(t_table));
	int i = 1;
	if (ac == 5 || ac == 6 )
	{
	   while (i < ac )
	   {
	     if (ft_isnumber(av[i]) == 1)
	         checker_parcing(3);
	      i++;
	   }
	   inicializada(table,ac,av);
		if (!get_mtx(table))
			err(1);
		render_philos(table);
	i = 0;
	while (i < table->nbr_of_pls)
	{
		printf("tb{id:%d}==> \t",table->philo[i].id) ;
		printf("tb{f_right:%d}\t",table->philo[i].f_right) ;
		printf("tb{f_left:%d}\t",table->philo[i].f_left) ;
		printf("tb{ts_eating:%d}\t",table->philo[i].ts_eating) ;
		printf("tb{ts_ttep:%d}\t",(int) table->philo[i].ttep) ;
		printf("\n\n");
		i++;
	}
		exit(0);
	}
	else
		printf("number of arg are notValid");
}
