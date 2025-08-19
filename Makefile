# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 16:51:26 by rvaz-da-          #+#    #+#              #
#    Updated: 2025/08/18 17:03:11 by rvaz-da-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat.a

SRC = error_cases.c main.c ft_cat.c scan_and_print.c

INCLUDE = .

OBJ = $(SRC:.o=.c)

EXEC = ft_cat

RM = rm -f

all: $(NAME) $(EXEC)

%.o: %.c
	cc $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(EXEC): $(OBJ)
	cc $(FLAGS) $(OBJ) -o  $(EXEC)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
