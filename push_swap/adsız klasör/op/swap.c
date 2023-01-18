/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:41:51 by oakyuz            #+#    #+#             */
/*   Updated: 2023/01/18 04:42:12 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_stack	*sx(t_stack *x)
{
	t_stack	*tmp;
	t_stack	*cup;

	if (!x || !(x->next))
		return (x);
	tmp = x->next;
	cup = tmp->next;
	tmp->next = x;
	x->next = cup;
	return (tmp);
}

void	sa(t_stack **a)
{
	*a = sx(*a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	*b = sx(*b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	*a = sx(*a);
	*b = sx(*b);
	ft_printf("ss\n");
}

