/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:50:16 by dnoll             #+#    #+#             */
/*   Updated: 2023/09/28 12:56:11 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

static int	ft_filter(char const *content, int i, va_list *args)
{
	int	filtrated_c;

	filtrated_c = 0;
	if (content[i] == 'c')
		filtrated_c += ft_printchar(va_arg(*args, int));
	if (content[i] == 's')
		filtrated_c += ft_printstring(va_arg(*args, char *));
	if (content[i] == 'p')
		filtrated_c += ft_printptr(va_arg(*args, unsigned long long));
	if (content[i] == 'd')
		filtrated_c += ft_printdec(va_arg(*args, int));
	if (content[i] == 'i')
		filtrated_c += ft_printdec(va_arg(*args, int));
	if (content[i] == 'u')
		filtrated_c += ft_printunsigned(va_arg(*args, unsigned int));
	if (content[i] == 'x')
		filtrated_c += ft_printhexa(va_arg(*args, unsigned int), 'x');
	if (content[i] == 'X')
		filtrated_c += ft_printhexa(va_arg(*args, unsigned int), 'X');
	if (content[i] == '%')
		filtrated_c += ft_putchar('%');
	return (filtrated_c);
}

int	ft_printf(char const *content, ...)
{
	va_list	args;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(args, content);
	while (content[i])
	{
		if (content[i] != '%')
			c += ft_putchar(content[i]);
		else
		{
			i++;
			c += ft_filter(content, i, &args);
		}
		i++;
	}
	va_end(args);
	return (c);
}
