# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/24 19:42:04 by rvaz-da-          #+#    #+#              #
#    Updated: 2025/08/24 22:30:27 by rvaz-da-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02.a

INCLUDE = .

SRC = src/main.c src/rush02.c src/parser.c src/print.c utils/ft_atoi.c utils/ft_putchar.c utils/ft_putstr.c utils/ft_split.c utils/ft_strcmp.c utils/ft_strdup.c utils/ft_strlen.c utils/ft_strncat.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

EXEC = rush-02

CC = cc

RM = rm -f

all: $(NAME) $(EXEC)

%.o: %.c
	cc $(FLAGS) -I $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(EXEC): $(OBJ)
	cc $(FLAGS) $(OBJ) -o $(EXEC)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re: clean all

.PHONY : all clean fclean re
