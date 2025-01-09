/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parissachatagny <parissachatagny@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 01:06:56 by parissachat       #+#    #+#             */
/*   Updated: 2025/01/09 14:08:21 by parissachat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int main(int ac, char **av)
{
    t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
    if (ac < 2 || (ac == 2 && !av[1][0]))
        return (1);
    a = ft_create_stack_a_bonus(ac, av);
    if (!a)
		return (1);
	if (ft_size_stack_bonus(a) < 2)
	{
		ft_free_stack_bonus(a);
		ft_error_message_bonus();
		return (1);
    }
    ft_read_and_do_operation_bonus(&a, &b);
    if (ft_is_stack_order_bonus(a, b) == 0)
        ft_printf("KO\n");
    else 
        ft_printf("OK\n");
    ft_clean_bonus(a, b);
    return (0);
}
