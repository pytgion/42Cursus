#include "libft.h"
#include <unistd.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*i;

	i = str;
	if(str == NULL)
		return NULL;
	while (n > 0)
	{
		*i = c;
		i++;
		n--;
	}
	return str;
}