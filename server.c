/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:12:18 by dnoll             #+#    #+#             */
/*   Updated: 2023/09/28 13:27:44 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft/libft.h"
#include <signal.h>

void	decrypt(int signal)
{
	static char	byte_to_recieve;
	static int				i;

	byte_to_recieve |= (signal == SIGUSR1);
	i++;
	if (i == 8)
	{
		ft_printf("%c", byte_to_recieve);
		i = 0;
		byte_to_recieve = 0;
	}
	else
	{
		byte_to_recieve <<= 1;
	}
}

int	main(void)
{
	ft_printf("PID server:%d\n", getpid());
	signal(SIGUSR2, decrypt);
	signal(SIGUSR1, decrypt);
	while (1)
		pause();
	return (0);
}
