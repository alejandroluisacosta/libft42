# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aacosta <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 12:09:36 by aacosta           #+#    #+#              #
#    Updated: 2024/01/15 16:11:42 by aacosta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

OFILES = $(CFILES:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

CC = gcc

CFLAGS = -Werror -Wextra -Wall

NAME = libft.a

all: $(NAME) 

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)


