/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:39:43 by oakyuz            #+#    #+#             */
/*   Updated: 2023/01/18 04:40:02 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.c"

static void	pp(t_stack **x, t_stack **y)
{
	t_stack	*tmp;

	if (!(*y))
		return ;
	tmp = *y;
	*y = (*y)->next;
	(*tmp).next = *x;
	*x = tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	pp(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	pp(b, a);
	ft_printf("pb\n");
}

void	p_n(t_stack **a, t_stack **b, int repeat, char mod)
{
	if (mod == 'a' || mod == 'A')
	{
		while (repeat--)
			pa(a, b);
	}
	else if (mod == 'b' || mod == 'B')
	{
		while (repeat--)
			pb(a, b);
	}
}

