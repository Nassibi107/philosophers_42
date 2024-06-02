/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_to_e.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:00:23 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/02 16:16:29 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"


void	philo_eats(t_pl *ph)
{
	t_table	*tb;

	tb = ph->auskunft;
	pthread_mutex_lock(&(tb->mtx.forchette[ph->f_left]));
	writer("has taken a fork",ph);
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
