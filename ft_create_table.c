/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:11:50 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/13 15:52:35 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"



// void	wake_up_philosophers(t_program *prg)
// {
// 	int	i;

// 	i = -1;
// 	prg->philos = malloc(sizeof(t_philo) * prg->philo_members);
// 	if (!(prg->philos))
// 		error_message(prg, 1);
// 	while (++i < prg->philo_members)
// 	{
// 		prg->philos[i].right_fork_id = (i + 2) % prg->philo_members;
// 		prg->philos[i].eaten_times = 0;
// 		prg->philos[i].philos_infos = prg;
// 		prg->philos[i].last_meal_time = 0;
// 		prg->philos[i].philo_id = i + 1;
// 		prg->philos[i].left_fork_id = i + 1;
// 	}
// }
