# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 13:46:44 by dmisnich          #+#    #+#              #
#    Updated: 2017/12/06 11:22:20 by ihozyain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRCS =	main.c ft_read.c \
		ft_validation.c ft_validation3.c ft_grid.c \
		ft_figure.c ft_max.c ft_shift_up.c ft_shift_left.c ft_new_map.c \
		ft_core.c ft_solve.c ft_shift_lu.c ft_check_and_shift.c ft_min.c \
		ft_strsplit.c ft_strnew.c ft_strsub.c ft_bzero.c \
		ft_memset.c ft_putchar.c ft_putstr.c ft_strlen.c \

OBJ = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) fillit.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
