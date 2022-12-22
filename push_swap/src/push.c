/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:34:23 by oakyuz            #+#    #+#             */
/*   Updated: 2022/12/21 23:24:55 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_push(t_list **dest, t_list **src)
{
	t_list		*temp;
	t_list		*temp_src;
	t_list		*temp_dest;

	if (ft_lstsize(*src) == 0)
		return (-1);
	temp_src = *src;
	temp_dest = *dest;
	temp = temp_src;
	temp = temp->next;
	*src = temp;
	if (!temp_dest)
	{
		temp_dest = temp;
		temp_dest->next = NULL;
		*dest = temp_dest;
	}
	else
	{
		temp_src->next = temp_dest;
		*dest = temp_src;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_b, t_list **stack_a)
{
	if (ft_push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
