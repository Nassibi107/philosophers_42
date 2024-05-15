/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:57:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/15 14:46:36 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void	err(t_faylassof *philo, int flag)
{
	(void) philo;
	   write(2, "Error\n", 6);
	if (flag == 0)
		write(2, "what ever!\n", 11);
	if (flag == 1)
		write(2, "memory problem please clean your device\n", 16);
	if (flag == 2)
		write(2, "Creating threads Failed!\n", 26);
	if (flag == 3)
		write(2, "Joing threads Failed!\n", 23);
	if (flag == 4)
		write(2, "Program Failed!\n", 17);
	if (flag == 5)
		write(2, "Creating Mutex Failed!\n", 24);
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
      // render_pls();
      inicializada(table,ac,av);

      printf("%d\t",table->nbr_of_pls);
      printf("%d\t",table->ttd);
      printf("%d\t",table->tte);
      printf("%d\t",table->tts);
      printf("%d\t",table->tpe);
      printf("[%d]\t",table->nbr_of_re);
      exit(0);
   }
   else
      printf("number of arg are notValid");
}
