/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:04:06 by dnoll             #+#    #+#             */
/*   Updated: 2023/09/28 13:04:21 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printunsigned(unsigned int uns)
{
	int	c;

	c = 0;
	if (uns >= 10)
		c += ft_printunsigned(uns / 10);
	ft_putchar(uns % 10 + '0');
	c++;
	return (c);
}
