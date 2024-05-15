/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:43 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/15 15:17:43 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_table
{
   int					nbr_of_pls;
	int					ttd;
	int					tte;
	int					tts;
	int					tpe;
   int               nbr_of_re;
	int					check_lop;
	int					table_destroy;
	long long			start_t;

}  t_table;

typedef struct s_pl
{
	int					id;
	int					f_right;
	int					f_left;
	int					ts_eating;
	long long			ttep;
	struct s_program	*philos_infos;
}  t_pl;

int   inicializada(t_table *table,int ac ,char *av[]);
int   ft_atoi(const char *str);
int	ins_range(long n);
int ft_isnumber(char *av);
void	checker_parcing(int flag);
void	error_parsing(int flag);

#endif



