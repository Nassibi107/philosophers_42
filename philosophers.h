/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:43 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/07 16:18:13 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int   ft_atoi(const char *str);
int	ins_range(long n);
int ft_isnumber(char *av);
void	checker_parcing(int flag);
void	error_parsing(int flag);
typedef struct s_faylassof
{
   int tk;
   int id;
   int tte;
   int tts;
   int ttd;
   int ttxd;
} t_faylassof;


#endif



