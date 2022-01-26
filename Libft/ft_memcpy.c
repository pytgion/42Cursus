#include "libft.h"
#include <unistd.h>

void	*ft_memcpy(void *dest, const void * src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if(!src && !dest)
		return dest;
	while(n--)
		*d++ = *s++;
	return dest;
}