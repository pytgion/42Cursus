/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:30:37 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/05 07:23:12 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			j;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[start + i] != '\0')
			i++;
		sub = (char *)malloc((sizeof(char) * i) + 1);
		if (!sub)
			return (NULL);
		j = 0;
		while (j < i)
		{
			sub[j] = s[start + j];
			j++;
		}
		sub[j] = '\0';
		return (sub);
	}
	return (NULL);
}
