/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:13:59 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/31 15:42:21 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

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
}

t_list  *ft_fill_stack(t_list *stack, char **argv);
{
    
}

int main(int argc, char **argv)
{
    t_list *stack;
    
    stack = malloc()
    if (argc < 2)
        ft_putstr_with_return_to_line("Error");
    if (argc == 2)
        argv = ft_split(argv[1], ' ');
    stack = ft_fill_stack(stack, argv);
    
    return (0);
}