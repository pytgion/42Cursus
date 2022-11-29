/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pytgion <pytgion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:22:09 by pytgion           #+#    #+#             */
/*   Updated: 2022/11/29 05:17:21 by pytgion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Libft/libft.h"
#include <signal.h>

unsigned char g_gelen = 0;

void	birsinyal(int sig, siginfo_t *si, void *undelete)
{
	static int	bit = 0;

	if (bit == 0)
		g_gelen = 0;
	g_gelen <<= 1;
	if (sig == SIGUSR2)
		g_gelen += 1;
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", g_gelen);
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
	sg.sa_sigaction = birsinyal;
	sigaction(SIGUSR1, &sg, NULL);
	sigaction(SIGUSR2, &sg, NULL);
	ft_printf("pid : %d\n", pid);
	while (1)
		;
}
