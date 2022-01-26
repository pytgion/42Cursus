#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char *s;
	unsigned char *d;

	d = (unsigned char *)str1;
	s = (unsigned char *)str2;
	if(!str1 && !str2)
		return str2;
	if(str2 > str1)
		while(n--)
			d[n] = s[n];
	else
		while(n--)
			*s++ = *d++;
	return (str1);
}