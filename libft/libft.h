/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:21:05 by dnoll             #+#    #+#             */
/*   Updated: 2023/09/29 09:26:08 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
int				ft_printf(char const *content, ...);
int				ft_printchar(char c);
int				ft_printdec(int nb);
int				ft_printhexa(unsigned long long n, char c);
int				ft_printptr(unsigned long long ptr);
int				ft_printstring(char *str);
int				ft_printunsigned(unsigned int uns);
int				ft_putchar(char c);
#endif
