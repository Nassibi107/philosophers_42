/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_has_running.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:21:47 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/03 15:10:34 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

long long	ft_time(void)
{
	struct timeval	time;

	gettimeofday(&time, 0);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

void	philo_has_running(t_table *tb)
{
	t_pl	*ph;
	int		i;

	i = -1;
	ph = tb->philo;
	tb->start_t = ft_time();
	while (++i < tb->nbr_of_pls)
	{
		if (pthread_create(&(ph[i].thread_key), NULL, \
		daily_philo_routine, &(ph[i])))
			return ;
		pthread_mutex_lock(&(tb->mtx.eat_habbit));
		ph[i].ts_eating = ft_time();
		pthread_mutex_unlock(&(tb->mtx.eat_habbit));
	}
}
