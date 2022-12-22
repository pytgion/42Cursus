/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:15:20 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/05 06:29:40 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t			total;
	size_t			original;

	original = n;
	total = ft_strlen(dest) + ft_strlen(src);
	while (*dest != 0 && n > 0)
	{
		dest++;
		n--;
	}
	if (n == 0)
		return (ft_strlen(src) + original);
	while (*src != '\0' && n > 1)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = 0;
	return (total);
}

//src'yi dest'in sonuna ekleyip src+dest'in uzunluğunu döner
