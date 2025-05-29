# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francisr <francisr@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 18:10:28 by francisr          #+#    #+#              #
#    Updated: 2025/05/27 20:19:52 by francisr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS_DIR = bonus

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
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS_SRC = $(addprefix bonus/, $(addsuffix _bonus.c, ft_lstnew))

OBJS = $(SRCS:%.c=%.o)
BONUS_OBJ = $(BONUS_SRC:%.c=%.o)

INCLUDES = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCLUDES)
	cc $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c
	cc $(CFLAGS) -c $< -o $@

test: $(NAME)
	cc $(CFLAGS) pruebas.c -L. -lft -o pruebas

clean:
	rm -f *.o $(BONUS_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

re_bonus: fclean bonus

.PHONY: all bonus clean fclean re re_bonus
