/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:10:22 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/01 03:31:10 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char				*p;
	unsigned int		i;

	i = 0;
	p = (char *)s;
	while (n--)
	{
		if ((char)p[i] == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
