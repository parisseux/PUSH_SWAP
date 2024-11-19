/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:55:40 by pchatagn          #+#    #+#             */
/*   Updated: 2024/11/19 17:07:21 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_doublon(char **argv)
{
    int a;
    int i;

    a = argv[0];
    i = 1;
    while (argv[i])
    {
        if (argv[i] == a)
            return (0);
        a = argv[i];
        i++;
    }
    return (1);
}

int ft_check_number(char **argv)
{
    int i;
    int j;
    
    i = 0;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][0] == '-' || argv[i][0] == '+')
                j++;
            if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
    
}