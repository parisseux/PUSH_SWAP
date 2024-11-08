/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:53:32 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/31 11:52:53 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_order(t_list *lst)
{
    int i;

    i = lst -> value;
    while (lst)
    {
        if (i > lst -> value)
            (-1);
        else 
            lst = lst -> next;        
    }
    return (1);
}

int ft_check_size_lst(t_list *lst)
{
    int n_operation;
    
    n_operation = 0;
    if (ft_lstsize(lst) < 2)
    {
        free(lst);
        return (-1);
    }
    if (ft_lstsize(lst) == 2)
    {
        n_operation = ft_arrange_lst_size2(lst);
    }
    else if (ft_lstsize(lst) == 3)
        n_operation = ft_arrange_lst_size3(lst);
    else
        n_operation = ft_arrange_biglist(lst);
    free(lst);
    return (n_operation); 
}

int main(int argc, char** argv)
{
    size_t i;
    t_list *lst;
    int val;
    int n_operation;
    
    lst = NULL;
    i = 0;
    if (argc < 2)
        return (-1);
    else if (argc == 2)
        lst = ft_split(argv[1]);
    else
    {
        while (argv[i])
        {
            val = ft_atoi(argv[i]);
            lst = ft_create_or_append_list(lst, val);          
            i++;
        }
    }
    if (ft_check_order(lst) == 1)
        return (0);
    else  
        n_operation = ft_check_size_lst(lst);
    return (n_operation);
}
