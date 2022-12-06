/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:38:05 by oakyuz            #+#    #+#             */
/*   Updated: 2022/12/06 20:01:36 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include <signal.h>

int		g_recieved = 0;

void	sigrecieve(int sig)
{
	static int		num = 0;

	num++;
	if (g_recieved == num)
		ft_printf("Recieved %d\n", sig);
}

int	main(int argc, char **argv)
{
	int			index;
	int			pid;
	int			bit;

	if (argc != 3)
		return (ft_printf("Dogru format '.client PID message' seklindedir"));
	pid = ft_atoi(argv[1]);
	signal(SIGUSR1, sigrecieve);
	index = -1;
	ft_printf("sending : %s\n", argv[2]);
	g_recieved = ft_strlen(argv[2]);
	while (argv[2][++index])
	{
		bit = 8;
		while (bit--)
		{
			usleep(150);
			if (argv[2][index] >> bit & 1)
				kill(pid, 31);
			else
				kill(pid, 30);
		}
	}
}
