/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:37:26 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/08 02:57:06 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list				*root;
	t_list				*lol;

	if (!lst || !f)
		return (NULL);
	root = NULL;
	while (lst)
	{
		lol = ft_lstnew((*f)(lst->content));
		if (!lst)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, lol);
		lst = lst->next;
	}
	return (root);
}
