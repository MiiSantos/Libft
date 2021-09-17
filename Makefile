# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 15:21:03 by mandress          #+#    #+#              #
#    Updated: 2021/09/16 20:12:04 by mandress         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= main.c \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strnchr.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_tolower.c

NAME	= libft.a

OBJS	= $(SRC:.c=.o)

FLAGS	= -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS):	$(SRC)
	clang $(FLAGS) -c $(SRC)

clean:
	rm $(OBJS)
fclean:	clean
	rm $(NAME)
re:	fclean all

.PHONY: all clean fclean re

#libft % clang -L . lft
