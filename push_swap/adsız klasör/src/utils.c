/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:44:59 by oakyuz            #+#    #+#             */
/*   Updated: 2023/01/18 04:50:51 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stacklen(t_stack *a)
{
	t_stack	*tmp;
	int		i;

	tmp = a;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	*get_stackindexes(t_stack *a)
{
	t_stack	*tmp;
	int		*ret;
	int		i;

	ret = ft_calloc(sizeof(int), stacklen(a) + 1);
	tmp = a;
	i = 0;
	while (tmp)
	{
		ret[i++] = tmp->index;
		tmp = tmp->next;
	}
	return (ret);
}

int	get_minindex(t_stack *a)
{
	int		ret;
	t_stack	*tmp;

	tmp = a;
	ret = a->index;
	while (tmp)
	{
		if (tmp->index < ret)
			ret = tmp->index;
		tmp = tmp->next;
	}
	return (ret);
}

// s?	Butun stackde gezip pivottan kucuk veya esit en buyuk indexi pivota esitler
// s?	bu sayi 0 degilse 1 return eder.
int	haspush(t_stack *a, int *pivot)
{
	t_stack	*tmp;
	int		max;

	max = 0;
	tmp = a;
	while (tmp)
	{
		if ((tmp->index > max) && (tmp->index <= *pivot))
			max = tmp->index;
		tmp = tmp->next;
	}
	if (!max)
		return (0);
	*pivot = max;
	return (1);
}
