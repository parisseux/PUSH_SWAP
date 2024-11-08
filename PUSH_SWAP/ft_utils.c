/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:18:18 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/31 11:55:54 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_atoi(char *str)
{
    int i;
    int n;
    int sign;

    i = 0;
    n = 0;
    sign = 0;
    if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    if (sign == 1)
        return (-n);
    return (n);    
}

t_list  *ft_split(char *str)
{
    
}

void    ft_putstr_with_return_to_line(char  *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (str);
}


