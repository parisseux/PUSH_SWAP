/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:36:24 by parissachat       #+#    #+#             */
/*   Updated: 2024/11/30 19:03:50 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack **head)
{
	t_stack	*last;
	t_stack	*second_last;
	t_stack	*first;

	if (!head || !(*head) || !(*head)->next)
		return ;
	first = *head;
	last = *head;
	while (last -> next != NULL)
		last = last->next;
	second_last = last -> prev;
	second_last->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*head = last;
}

void	ft_rra(t_stack **head)
{
	ft_reverse_rotate(head);
	ft_print_str("rra");
}

void	ft_rrb(t_stack **head)
{
	ft_reverse_rotate(head);
	ft_print_str("rrb");
}

void	ft_rrr(t_stack **head_a, t_stack **head_b)
{
	ft_reverse_rotate(head_a);
	ft_reverse_rotate(head_b);
	ft_print_str("rrr");
}
