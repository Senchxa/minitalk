# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnoll <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 09:22:41 by dnoll             #+#    #+#              #
#    Updated: 2023/09/29 09:22:52 by dnoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = 	ft_atoi.c ft_printchar.c\
		ft_printdec.c ft_printf.c\
		ft_printhexa.c ft_printptr.c\
		ft_printstring.c ft_printunsigned.c\
		ft_putchar.c\


OBJ = $(SOURCE:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIB = ar rcs

all: $(NAME)
$(NAME): $(OBJ)
	@ $(LIB) $(NAME) $(OBJ)

$(OBJ): $(SOURCE)
	@ $(CC) $(CFLAGS) -c $(SOURCE)
clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean
