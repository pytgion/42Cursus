#include "libft.h"

int	ft_isalpha(int	c)
{
	if(ft_isupper(c) || ft_islower(c))
		return 1;
	return 0;
}
