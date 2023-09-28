/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:24:30 by dnoll             #+#    #+#             */
/*   Updated: 2023/09/28 13:29:09 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	encrypt(int pid, unsigned char byte_to_send)
{
	int				i;
	unsigned char	temp;

	temp = byte_to_send;
	i = 7;
	while (i >= 0)
	{
		temp = byte_to_send >> i;
		if (temp % 2 == 0)
		{
			kill(pid, SIGUSR2);
		}
		else
		{
			kill(pid, SIGUSR1);
		}
		--i;
		usleep(100);
	}
}

int	main(int ac, char **av)
{
	int		pid;
	char	*str;
	int		i;

	if (ac != 3)
	{
		ft_printf("Wrong execution!\n");
		ft_printf("HINT: ./client [Server PID] [message]\n");
		return (0);
	}
	str = av[2];
	pid = ft_atoi(av[1]);
	i = 0;
	while (str[i])
	{
		encrypt(pid, (unsigned char)str[i]);
		i++;
	}
	return (0);
}
