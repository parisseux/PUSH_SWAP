/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:51:55 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/31 15:35:36 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_find_min(t_list *lst)
{
    int min;
    t_list *tmp;
    
    tmp = lst;
    min = tmp -> value;
    while(tmp)
    {
        if (tmp-> value < min)
            min = tmp-> value;
        tmp = tmp -> next;
    }
    return (min);
}

int ft_find_max(t_list *lst)
{
    int max;
    t_list *tmp;
    
    tmp = lst;
    max = tmp -> value;
    while(tmp)
    {
        if (tmp-> value > max)
            max = tmp-> value;
        tmp = tmp -> next;
    }
    return (max);
    
}
size_t ft_lstsize(t_list *lst)
{
    size_t count;

    count = 0;
    while (lst)
    {
        lst = lst -> next;
        count++;
    }
    return (count);
    
}

t_list *ft_last_node(t_list *lst)
{
    while (lst && lst -> next)
    {
        lst = lst -> next;
    }
    return (lst);
}

t_list	*ft_create_or_append_list(t_list *lst, int value)
{
	t_list	*new_node;
    t_list  *last;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = value;
    new_node->index = ft_lstsize(lst); 
	new_node->next = NULL;
    if (lst == NULL)
        return (new_node);
    last = ft_last_node(lst);
    last -> next = new_node;
	return (lst);
}

