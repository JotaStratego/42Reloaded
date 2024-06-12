# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javialva <javialva@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 12:31:44 by javialva          #+#    #+#              #
#    Updated: 2024/06/12 12:52:55 by javialva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_name
CFLAGS = -Wall -Wextra -Werror
CFILES = display_file.c
OBJECTS = *.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(CFILES)
	ar rc $(NAME) $(OBJECTS)
clean:
	/bin/rm -f $(OBJECTS)

fclean:
	/bin/rm -f $(NAME)
