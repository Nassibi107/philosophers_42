/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    inicializada .c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:48:18 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/15 14:54:40 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"
#include <stdio.h>


void  ft_fill_arr(int *arr,int ac , char **av)
{
   int i;
   int j;

   i = 0;
   j = 1;
   while ( i < ac - 1)
      arr[i++] = ft_atoi(av[j++]);

}


int   inicializada(t_table *table,int ac ,char *av[])
{
	int i;
	int *arr = malloc(sizeof(int) * (ac - 1));
	if (!arr)
   	return(0);
	ft_fill_arr(arr,ac,av);
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
	printf("%d",i);

	return (1);
}
