/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parissachatagny <parissachatagny@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:06 by pchatagn          #+#    #+#             */
/*   Updated: 2024/11/20 12:10:14 by parissachat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_node(int value)
{
	t_stack *head;

	head = (t_stack *)malloc(1 * sizeof(t_stack));
	if (!head)
		return (NULL);
	head->data = value;
	head->next = NULL;
	head->prev = NULL;
	return (head);
}

void	ft_create_or_add_back(t_stack **head, int value)
{
	t_stack *last;
	t_stack *new;

	// si stack vide, on crée en mettant un node avec la value
	if (*head == NULL)
	{
		*head = ft_new_node(value);
		return ;
	}
	// si la stack existe, on va a la fin de la stack et on ajoute un node. 
	last = *head;
	while (last -> next != NULL)
		last = last->next;
	new = ft_new_node(value);
	if (!new)
		return ;
	last->next = new;
	new->prev = last;
}

void    ft_free_stack(t_stack **stack)
{
	t_stack *temp;
	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

void print_stack(t_stack *head)
{
    t_stack *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
