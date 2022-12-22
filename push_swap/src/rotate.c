/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:30:30 by oakyuz            #+#    #+#             */
/*   Updated: 2022/12/21 23:01:22 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rotate(t_list **stack)
{
	t_list		*temp;
	t_list		*temp_last;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	temp = *stack;
	temp_last = ft_lstlast(*stack);
	*stack = temp->next;
	temp->next = NULL;
	temp_last->next = temp;
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if ((rotate(stack_a) == -1) || rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rr", 1);
	return (0);
}
