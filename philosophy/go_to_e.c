/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_to_e.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:00:23 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/03 15:09:18 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

void	philo_eats(t_pl *ph)
{
	t_table	*tb;

	tb = ph->auskunft;
	pthread_mutex_lock(&(tb->mtx.forchette[ph->f_left]));
	writer("has taken a fork", ph);
	pthread_mutex_lock(&(tb->mtx.forchette[ph->f_right]));
	writer("has taken a fork", ph);
	pthread_mutex_lock(&(tb->mtx.eat_habbit));
	writer("is eating", ph);
	ph->ttep = ft_time();
	pthread_mutex_unlock(&(tb->mtx.eat_habbit));
	pthread_mutex_lock(&(tb->mtx.tk_timeat));
	(ph->ts_eating)++;
	pthread_mutex_unlock(&(tb->mtx.tk_timeat));
	go_tnt(tb->tte);
	pthread_mutex_unlock(&(tb->mtx.forchette[ph->f_left]));
	pthread_mutex_unlock(&(tb->mtx.forchette[ph->f_right]));
}

void	*daily_philo_routine(void *thing)
{
	t_table		*tb;
	t_pl		*ph;

	ph = (t_pl *)thing;
	tb = ph->auskunft;
	if (ph->id % 2)
		usleep(20000);
	while (!aul(tb))
	{
		if (check(tb))
			break ;
		philo_eats(ph);
		writer("is sleeping", ph);
		go_tnt(tb->tts);
		writer("is thinking", ph);
	}
	return (NULL);
}
