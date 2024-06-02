/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:11:50 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/02 18:35:08 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"
#include <stdio.h>


void go_out()
{
	write(1,"mutex has crashed!!",  20);
	exit(1);
}

int	render_philos(t_table *prg)
{
	int	i;

	i = 0;
	prg->philo = malloc(sizeof(t_pl) * prg->nbr_of_pls);
	if (!(prg->philo))
		return (0);
	while (i < prg->nbr_of_pls)
	{
		prg->philo[i].id = i + 1;
		prg->philo[i].ts_eating = 0;
		prg->philo[i].ttep = 0;
		prg->philo[i].f_left = i + 1;
		prg->philo[i].f_right = (i + 2) % prg->nbr_of_pls;
		prg->philo[i].auskunft = prg;
		i++;
	}
	return (1);
}
int checker_mtx(t_table *prg)
{
	if (pthread_mutex_init(&(prg->mtx.writing), NULL))
		go_out();
	if (pthread_mutex_init(&(prg->mtx.eat_habbit), NULL))
		go_out();
	if (pthread_mutex_init(&(prg->mtx.destroy), NULL))
		go_out();
	if (pthread_mutex_init(&(prg->mtx.wholeat), NULL))
		go_out();
	if (pthread_mutex_init(&(prg->mtx.tk_timeat), NULL))
		go_out();
	return (1);
}
int	get_mtx(t_table *prg)
{
	int	i;

	i = -1;
	prg->mtx.forchette = malloc(sizeof(pthread_mutex_t)  * prg->nbr_of_pls);
	if (!(prg->philo))
		return (0);
	while (++i < prg->nbr_of_pls)
		if (pthread_mutex_init(&(prg->mtx.forchette[i]), NULL))
			go_out();
	return (checker_mtx(prg));
}
