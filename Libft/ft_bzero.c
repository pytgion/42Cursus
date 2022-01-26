#include "libft.h"
#include <unistd.h>

void	ft_bzero(char	*str, size_t n)
{
	unsigned char	*i;

	i = (unsigned char*)str;
	while(n--)
		*str++ = '\0';
}