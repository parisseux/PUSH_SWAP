/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:51:26 by pchatagn          #+#    #+#             */
/*   Updated: 2024/11/19 17:25:31 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_create_stack_a(int argc, char **argv)
{
	t_stack	*stack;
	int i;
	int j;
	int value; 
	
	stack = NULL;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	i = 0;
	while (argv[i])
		i++;
	if (i < 2)
		return (stack);
	j = 0;
	while (i > 1)
	{
		if (!(ft_check_number(argv[j])))
			return (NULL);
		value = ft_atoi(argv[j]);
		ft_create_or_append(stack, value);
		i--;	
	}
	if (!ft_check_doublon(stack))
		return (NULL);
	return (stack);
}

int main(int argc, char **argv)
{
    t_stack	*stack_a;
	t_stack	*stack_b;
	
    if (argc < 2)
        return (0);
	stack_a = ft_create_stack_a(argc, argv);
	if (stack_a == )
	stack_b = NULL;

	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
