/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:06 by pchatagn          #+#    #+#             */
/*   Updated: 2024/11/19 14:22:39 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_free_stack(t_stack **stack)
{
	t_stack *temp;
	while (stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}