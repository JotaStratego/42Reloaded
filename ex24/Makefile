# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javialva <javialva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 21:28:25 by javialva          #+#    #+#              #
#    Updated: 2024/06/10 22:17:02 by javialva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	srcs/ft_swap.c
INCLUDES_DIR = -Iincludes
CFLAGS = -Wall -Wextra -Werror
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC_DIR) $(INCLUDES_DIR)
	ar rc $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
