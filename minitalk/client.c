#include "include/Libft/libft.h"
#include <signal.h>

int	g_gelen = 0;

void	birsinyal(int sig)
{
	static int	say = 0;

	say++;
	if (g_gelen == say)
		ft_printf("Recieved\n", sig);
}

int	main(int argc, char **argv)
{
	int		index;
	int		pid;
	int		a;

	if (argc != 3)
		return (ft_printf("Dogru format './client pid message' seklindedir\n"));
	pid = ft_atoi(argv[1]);
	signal(SIGUSR1, birsinyal);
	index = -1;
	ft_printf("Sending : %s\n", argv[2]);
	g_gelen = ft_strlen(argv[2]);
	while (argv[2][++index])
	{
		a = 8;
		while (a--)
		{
			usleep(150);
			if (argv[2][index] >> a & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
		}
	}
}
