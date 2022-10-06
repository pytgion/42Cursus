/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 00:20:40 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/01 03:31:18 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*str;

	if (*lst == NULL)
		*lst = new;
	else
	{
		str = *lst;
		while (str -> next != NULL)
			str = str -> next;
		str -> next = new;
	}
}
