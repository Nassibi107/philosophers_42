/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:08:19 by ynassibi          #+#    #+#             */
/*   Updated: 2024/05/07 16:33:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"


int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int   is_digit(char *s)
{
   int   i;

   i = 0x0;
   while (s[i])
   {
      if (!ft_isdigit(s[i++]))
         return (0x0);
   }
   return (0x1);
}
int ft_isnumber(char *av)
{
   if (!is_digit(av) || (!ins_range(ft_atoi(av))))
       return (1);
   return (0);
}
