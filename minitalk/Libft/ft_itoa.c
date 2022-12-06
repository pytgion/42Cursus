/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:41:50 by oakyuz            #+#    #+#             */
/*   Updated: 2022/04/08 12:24:07 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(int n)
{
	size_t		nbr_len;

	nbr_len = 0;
	if (n <= 0)
		nbr_len++;
	while (n)
	{
		n /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	char		*dest;
	size_t		i;

	i = len(n);
	dest = ft_calloc(i + 1, sizeof(char));
	if (!dest)
		return (NULL);
	if (n == 0)
		*dest = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(dest, "-2147483648", i + 1);
			return (dest);
		}
		dest[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(dest + --i) = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}

//length tutmak için değişken;
//eğer eksi değer içeriyorsa '-' işareti için bir alan açıyoruz
//her basamakta length artar
//sonunda NULL değer bulunacak bir string için yer ayırıyoruz.
//calloc ile açtığımız alanın kontrolü
//n == 0 durumunda özel olarak stringi 0'a eşitliyoruz
//int min range için özel durum
//negatif sayılarda ilk karakter
//sayıyı işleme sokmak için pozitife çeviririz
//stringin sonundan başlayarak her basamağın 10 modunu yazdırırız
//basamakları tek tek düşeriz
//bitti :)
