# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 18:56:36 by gdudorov          #+#    #+#              #
#    Updated: 2020/01/21 10:28:06 by gdudorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

SRCo= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCL = includes/

ip = "-nostdinc" 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I$(INCL) $(ip)
	ar rc $(NAME) $(SRCo)
	ranlib $(NAME)

clean:
	rm -f ft*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
