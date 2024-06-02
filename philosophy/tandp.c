/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tandp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:12:31 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/02 16:22:34 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"


void	time_between_taches(long long time)
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
