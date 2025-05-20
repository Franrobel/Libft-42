# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francisr <francisr@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 18:10:28 by francisr          #+#    #+#              #
#    Updated: 2025/05/12 18:16:44 by francisr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strlen.c \
	ft_memset.c \
	ft_atoi.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test: $(NAME)
	gcc -Wall -Wextra -Werror pruebas.c -L. -lft -o pruebas

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o pruebas

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
