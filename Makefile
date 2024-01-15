# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aacosta <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 12:09:36 by aacosta           #+#    #+#              #
#    Updated: 2024/01/15 13:13:05 by aacosta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = *.c

OFILES = $(CFILES: .c=.o)

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


