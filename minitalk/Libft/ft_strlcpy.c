/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:19:54 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/07 23:19:21 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t		len;

	len = 0;
	if (n > 0)
	{
		while (src[len] != '\0' && len < (n - 1))
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = 0;
	}
	while (src[len])
		len++;
	return (len);
}

//source'dan destination'un ardına n kadar ekleyip src'nin uzunluğunu döner.
