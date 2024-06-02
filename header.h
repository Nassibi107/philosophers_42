
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_philo
{
	int					philo_id;
	long long			last_meal_time;
	int					left_fork_id;
	pthread_t			thread_id;
	int					right_fork_id;
	int					eaten_times;
	struct s_program	*philos_infos;
}	t_philo;

typedef struct s_program
{
	int					philo_members;
	int					time_to_die;
	int					time_to_eat;
	int					time_to_sleep;
	int					times_philo_eats;
	int					dead;
	int					philo_all_ate;
	long long			time_start;
	pthread_mutex_t		eat_habbit;
	pthread_mutex_t		death;
	pthread_mutex_t		all_eat;
	pthread_mutex_t		check_eaten_times;
	pthread_mutex_t		*forks;
	pthread_mutex_t		print_habbit;
	t_philo				*philos;
}						t_program;
