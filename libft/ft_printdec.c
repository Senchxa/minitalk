/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:02:34 by dnoll             #+#    #+#             */
/*   Updated: 2023/09/28 13:03:37 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

static int	ft_dcount(long int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

int	ft_printdec(int nb)
{
	long int	nb_topos;

	nb_topos = 0;
	ft_putnbr(nb);
	if (nb >= 0)
		return (ft_dcount(nb));
	nb_topos = (long int)nb * (-1);
	return (ft_dcount(nb_topos) + 1);
}
