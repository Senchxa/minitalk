/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:12:18 by dnoll             #+#    #+#             */
/*   Updated: 2023/09/28 12:12:39 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft/libft.h"
#include <signal.h>

void	action(int sigsent)
{
	static unsigned char	buff;
	static int				i;

	buff |= (sigsent == SIGUSR1);
	i++;
	if (i == 8)
	{
		ft_printf("%c", buff);
		i = 0;
		buff = 0;
	}
	else
		buff <<= 1;
}

int	main(void)
{
	ft_printf("PID serve:%d\n", getpid());
	signal(SIGUSR2, action);
	signal(SIGUSR1, action);
	while (1)
		pause();
	return (0);
}
