/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:18:30 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/07 18:11:41 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"


void ft_init(t_faylassof *philo)
{
   philo->tk = 0;
   philo->id = 0;
   philo->tte = 0;
   philo->tts = 0;
   philo->ttd = 0;
   philo->ttxd = -1;
}
