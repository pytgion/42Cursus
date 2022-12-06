/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:31:18 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/08 00:43:45 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check(char c, char const *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s;
	char			*p;

	i = 0;
	j = ft_strlen(str);
	s = 0;
	if (!c)
		return (NULL);
	if (!str)
		return (NULL);
	while (str[i] && ft_check(str[i], c))
		i++;
	while (j > i && ft_check(str[j - 1], c))
		j--;
	p = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!p)
		return (NULL);
	while (i < j)
		p[s++] = str[i++];
	p[s] = '\0';
	return (p);
}
