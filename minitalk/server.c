/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:01:25 by oakyuz            #+#    #+#             */
/*   Updated: 2022/12/06 20:05:56 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Libft/libft.h"
#include <signal.h>

unsigned char	g_recieved = 0;

void	asignal(int sig, siginfo_t *si, void *undelete)
{
	static int	bit = 0;

	if (bit == 0)
		g_recieved = 0;
	g_recieved <<= 1;
	if (sig == SIGUSR2)
		g_recieved += 1;
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", g_recieved);
		bit = 0;
		kill(si->si_pid, SIGUSR1);
		undelete = "error verme";
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	sg;

	pid = getpid();
	sg.sa_flags = SA_SIGINFO;
	sg.sa_sigaction = asignal;
	sigaction(SIGUSR1, &sg, NULL);
	sigaction(SIGUSR2, &sg, NULL);
	ft_printf("pid : %d\n", pid);
	while (1)
		;
}
