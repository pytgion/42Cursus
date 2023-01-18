/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:43:37 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/07 23:18:02 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_str_in_array(const char *s, char de)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == de)
			s++;
		else
		{
			while (*s != de && *s)
				s++;
			i++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char				**arr;
	unsigned int		i;
	unsigned int		a;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc(ft_str_in_array(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	a = -1;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i = 0;
			while (*s != c && *s && ++i)
				s++;
			arr[++a] = (char *)ft_calloc(i + 1, sizeof(char));
			ft_strlcpy(arr[a], s - i, i + 1);
		}
	}
	return (arr);
}
