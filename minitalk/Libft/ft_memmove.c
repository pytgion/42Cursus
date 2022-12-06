/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:25:12 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/08 00:35:35 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst;
	char			*src2;

	i = 0;
	dst = (char *)dest;
	src2 = (char *)src;
	if (dest == src)
		return (dest);
	if (dst == NULL || src2 == NULL)
		return (NULL);
	if ((char *)dest < (char *)src)
	{
		while (n--)
		{
			((char *)dst)[i] = ((char *)src2)[i];
			i++;
		}
	}
	else
	{
		while (++i <= n)
			dst[n - i] = src2[n - i];
	}
	return (dest);
}

//dest'in pointer'ı source'un önündeyse source'dan dest'e kopyalar.
//source'un pointer'ı dest'in önünde ise sondan başlayarak kopyalar.
//dest'in ilk pointer'ını döner.
