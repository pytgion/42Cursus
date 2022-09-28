#include "../include/minitalk.h"

t_list		*client_initate(void)
{
	t_list		talk;
	talk = malloc(sizeof(t_list));
	if (!talk)
	{
		ft_putstr("[ERROR]: Out of memory! malloc failed.\n");
		exit(EXIT_FAILURE);
	}
}