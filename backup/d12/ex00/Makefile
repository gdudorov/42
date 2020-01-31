# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 18:56:36 by gdudorov          #+#    #+#              #
#    Updated: 2020/01/23 17:59:29 by gdudorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_display_file

C_FILES = ft_display_file.c

NAMEo = "*.o"

SRC = "srcs/ft_putstr.c"

ip = "-nostdinc" 

all: $(NAME)

$(NAME):
	@gcc  -Wall -Wextra -Werror $(C_FILES) $(SRC) -o $(NAME)

norm:
	@norminette -R CheckForbiddenSourceHeader $(C_FILES)

clean:
	@rm -f $(NAMEo)

fclean: clean
	@rm -f $(NAME)

re: fclean all
