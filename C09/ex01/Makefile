# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 23:40:19 by rvaz-da-          #+#    #+#              #
#    Updated: 2025/08/13 12:01:03 by rvaz-da-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \

OBJ = $(SRC:.c=.o)

INCLUDES = includes

RM = rm -f

all: $(NAME)

%.o: %.c
	CC $(FLAGS) -I $(INCLUDES) -c $<  -o $@
	
$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


