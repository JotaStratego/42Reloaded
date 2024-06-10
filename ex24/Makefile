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
SRC_DIR = ./srcs
INCLUDES_DIR = ./includes/*.h
CFLAGS = -Wall -Wextra -Werror
OPTION = -c $(INCLUDES_DIR)
FILES = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strcmp.c \
	$(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_swap.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(OPTION) $(FILES) $(INCLUDES_DIR)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean -all
