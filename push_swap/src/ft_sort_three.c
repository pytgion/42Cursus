/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:43:44 by oakyuz            #+#    #+#             */
/*   Updated: 2022/12/21 21:41:40 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_other_three(t_list **stack_a, int *num)
{
	if (num[0] > num[1] && num[1] > num[2])
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (num[0] < num[1] && num[1] > num[2]
		&& num[0] < num[2])
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	ft_sort_three(t_list **stack_a)
{
	t_list		*head;
	int			num[3];
	int			i;

	head = *stack_a;
	i = 0;
	while (head != NULL)
	{
		num[i] = head->content;
		head = head->next;
		i++;
	}
	if (num[0] > num[1] && num[1] < num[2] && num[0] < num[2])
		sa(stack_a);
	else if (num[0] < num[1] && num[1] > num[2] && num[0] > num[2])
		rra(stack_a);
	else if (num[0] < num[1] && num[1] > num[2] && num[0] < num[2])
		ra(stack_a);
	else
		ft_other_three(stack_a, num);
}
