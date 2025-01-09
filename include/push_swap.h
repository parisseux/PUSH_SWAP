/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parissachatagny <parissachatagny@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:37:20 by pchatagn          #+#    #+#             */
/*   Updated: 2025/01/09 14:40:36 by parissachat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

# include <stdio.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "stack.h"

t_stack	*ft_new_node(int value);
t_stack	*ft_create_stack_a(int argc, char **argv);
void	ft_create_or_add_back(t_stack **head, int value);
void	ft_create_or_add_front(t_stack **head, int value);
void	ft_free_stack(t_stack **stack);
void	ft_print_stack(t_stack *head);
int		ft_check_number(char *argv);
int		ft_check_doublon(t_stack **head);
void	ft_error_message(void);
void	ft_free_split(char **split);
int		ft_size_stack(t_stack *stack);
void	ft_delete_first_node(t_stack **head);
void	ft_print_str(char *str);
t_stack	*ft_find_max(t_stack *stack);
t_stack	*ft_find_min(t_stack *stack);
int		ft_find_index_of_max(t_stack *head);
int		ft_find_index_of_min(t_stack *head);
int		ft_validate_args(char **argv,
			int j, t_stack **stack, char **split_argv);
void	ft_cleanup(t_stack **stack, char **split_argv);
void 	ft_free_instructions(t_inst *head);
void    ft_add_instruction(t_inst **head, const char *inst);
void ft_changement_inst(t_inst *temp, char *new_inst);
void ft_check_inst1(t_inst *head);
void ft_check_inst2(t_inst **head);
void ft_print_inst(t_inst *head);
void ft_remove_inst(t_inst **head, t_inst *temp);
int ft_nombre_instruction(t_inst	*inst);
void ft_normalise_stack(t_stack *head);
void ft_fill_and_order_tab(t_stack *head, long *tab, int size);
void ft_swap_long(long *tab, int i);
void ft_add_data_norm(t_stack *temp, long *tab, int size);
void ft_order_tab(long *tab, int size);
void ft_replace_data_with_normalised(t_stack *head);


//operations 
void	ft_swap(t_stack **stack);
void	ft_sa(t_stack **stack, t_inst **inst);
void	ft_sb(t_stack **stack, t_inst **inst);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, t_inst **inst);
void	ft_pa(t_stack **src, t_stack **dst, t_inst **inst);
void	ft_pb(t_stack **src, t_stack **dst, t_inst **inst);
void	ft_reverse_rotate(t_stack **head);
void	ft_rra(t_stack **head, t_inst **inst);
void	ft_rrb(t_stack **head, t_inst **inst);
void	ft_rrr(t_stack **head_a, t_stack **head_b, t_inst **inst);
void	ft_rotate(t_stack **head);
void	ft_ra(t_stack **head, t_inst **inst);
void	ft_rb(t_stack **head, t_inst **inst);
void	ft_rr(t_stack **head_a, t_stack**head_b, t_inst **inst);

//order
void	ft_order(t_stack **stack_a, t_stack **stack_b);
int		ft_check_stack(t_stack **head);
void	ft_order_stack_size_3(t_stack **head,  t_inst **inst);
void	ft_order_stack_size_4(t_stack **stack_a, t_stack **stack_b,  t_inst **inst);
void	ft_order_big_stack(t_stack **stack_a, t_stack **st,  t_inst **inst);
void	init_nodes_a(t_stack **stack_a, t_stack **stack_b);
void	init_nodes_b(t_stack **stack_a, t_stack **stack_b);
void	move_a_to_b(t_stack **stack_a, t_stack **stack_b,  t_inst **inst);
void	move_b_to_a(t_stack **stack_a, t_stack **stack_b,  t_inst **inst);
void	ft_node_at_the_top_stack_a(t_stack **stack, t_stack *node,  t_inst **inst);
void	ft_node_at_the_top_stack_b(t_stack **stack, t_stack *node,  t_inst **inst);
void	ft_index(t_stack **stack);
void	ft_target_b(t_stack **stack_a, t_stack **stack_b);
void	ft_target_a(t_stack **stack_a, t_stack **stack_b);
void	ft_cost_analysis_a(t_stack **stack_a, t_stack **stack_b);
void	ft_cost_analysis_b(t_stack **stack_a, t_stack **stack_b);
void	ft_find_cheapest(t_stack **stack);
void	rotate_node_and_t_node(t_stack **stack_a,
			t_stack **stack_b, t_stack *node,  t_inst **inst);
void	rev_rotate_node_and_t_node(t_stack **stack_a,
			t_stack **stack_b, t_stack *node,  t_inst **inst);
void	ft_min_on_top(t_stack **stack_a,  t_inst **inst);

#endif