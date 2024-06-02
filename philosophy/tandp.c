/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tandp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:12:31 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/02 18:23:26 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"


void	go_tnt(long long time)
{
	long long	now;

	now = ft_time();
	while (ft_time() - now <= time)
	{
		usleep(100);
	}
}

void	writer(char *str, t_pl *ph)
{
	t_table	*tb;

	tb = ph->auskunft;
	pthread_mutex_lock(&(tb->mtx.writing));
	pthread_mutex_lock(&(tb->mtx.destroy));
	if (!(tb->table_destroy))
	{
		printf("%lld %d %s\n", (ft_time() - tb->start_t), \
		ph->id, str);
	}
	pthread_mutex_unlock(&(tb->mtx.destroy));
	pthread_mutex_unlock(&tb->mtx.writing);
}
int	aul(t_table *tb)
{
	pthread_mutex_lock(&tb->mtx.destroy);
	if (tb->table_destroy == 0)
		return (pthread_mutex_unlock(&tb->mtx.destroy), 0);
	pthread_mutex_unlock(&tb->mtx.destroy);
	return (1);
}

int	check(t_table *tb)
{
	if (tb->nbr_of_pls == 1)
	{
		writer("has taken a fork",tb->philo);
		return (1);
	}
	pthread_mutex_lock(&(tb->mtx.wholeat));
	if (tb->check_lop)
	{
		pthread_mutex_unlock(&(tb->mtx.wholeat));
		return (1);
	}
	pthread_mutex_unlock(&(tb->mtx.wholeat));
	return (0);
}
