/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parissachatagny <parissachatagny@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:51:26 by pchatagn          #+#    #+#             */
/*   Updated: 2024/11/20 16:42:04 by parissachat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_create_stack_a(int argc, char **argv)
{
	t_stack	*stack;
	char **split_argv;
	int i;
	int value;
	int j;
	
	j = 1;
	stack = NULL;
	split_argv = NULL;
	if (argc == 2)
	{
		split_argv = ft_split(argv[1], ' ');
		if (!split_argv)
			return (NULL);
		j = 0;
		argv = split_argv;
	}
	i = 0;
	while (argv[i])
		i++;
	if (i < 2)
	{
		if (split_argv)
			ft_free_split(split_argv);
		ft_error_message();
		return (NULL);
	}
	while (argv[j])
	{
		if (!(ft_check_number(argv[j])))
		{
			ft_free_stack(&stack);
			if (split_argv)
				ft_free_split(split_argv);
			return (NULL);
		}
		value = ft_atoi(argv[j]);
		ft_create_or_add_back(&stack, value);
		j++;	
	}
	if (!ft_check_doublon(&stack))
	{
		ft_free_stack(&stack);
		if (split_argv)
			ft_free_split(split_argv);
		return (NULL);
	}
	if (split_argv)
			ft_free_split(split_argv);
	return (stack);
}

int main(int argc, char **argv)
{
    t_stack	*stack_a;
	t_stack	*stack_b;
	
    if (argc < 2)
	{
		ft_error_message();
		return (1);
	}
	stack_a = ft_create_stack_a(argc, argv);
	print_stack(stack_a);
	if (!stack_a)
	{
		return (1);
	}
	stack_b = NULL;
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
