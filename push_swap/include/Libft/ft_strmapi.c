/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:06:00 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/08 04:34:53 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*dest;
	size_t				i;

	i = 0;
	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//string'in içinde dolaşarak tüm elemanlara f fonksiyonunu uygular.
