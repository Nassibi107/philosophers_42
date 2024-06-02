/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:43 by ynassibi          #+#    #+#             */
/*   Updated: 2024/06/02 16:22:55 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <sys/time.h>
# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>


typedef struct s_pl
{
	int					id;
	int					f_right;
	int					f_left;
	int					ts_eating;
	// * last time of meal
	long long			ttep;
	pthread_t			thread_key;
	struct	s_table *auskunft;
}	t_pl;


typedef struct s_mutex
{
	pthread_mutex_t		*forchette;
	pthread_mutex_t		destroy;
	pthread_mutex_t		eat_habbit;
	pthread_mutex_t		writing;
	pthread_mutex_t		wholeat;
	pthread_mutex_t		tk_timeat;
}	t_mutex;

typedef struct s_table
{
	t_pl					*philo;
	t_mutex				mtx;
	// * ==>philo_members
	int					nbr_of_pls;
	// * ==> time_to_die
	int					ttd;
	// * ==> time_to_eat
	int					tte;
	// * ==>time_to_sleep
	int					tts;
	// * ==> times_philo_eats
	int					tpe;
	// * ==>  times_philo_eats
	int					nbr_of_re;
	// * ==> all philos was eating
	int					check_lop;
	// * ==> dead
	int					table_destroy;
	// * ==> time of start
	long long			start_t;
}	t_table;


int	inicializada(t_table *table,int ac ,char *av[]);
int	ft_atoi(const char *str);
int	ins_range(long n);
int ft_isnumber(char *av);
void	checker_parcing(int flag);
int	get_mtx(t_table *prg);
void	error_parsing(int flag);
int	render_philos(t_table *prg);
long long ft_time();
void	writer(char *str, t_pl *prg);
void	go_tnt(long long time);
void	philo_eats(t_pl *ph);
#endif



