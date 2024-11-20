/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parissachatagny <parissachatagny@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:00:14 by parissachat       #+#    #+#             */
/*   Updated: 2024/11/20 15:30:35 by parissachat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error_message(void)
{
    write(2, "Error:\n", 7);
    write(2, "- Input must contain only positive or negative numbers.\n", 57);
    write(2, "- No duplicates are allowed.\n", 30);
    write(2, "- At least two numbers are required.\n", 38);
}