# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 22:18:28 by rvaz-da-          #+#    #+#              #
#    Updated: 2025/08/18 10:55:41 by rvaz-da-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file.a

SRC = src/main.c src/display_file.c src/error_messages.c

INCLUDES = .

FLAGS = -Werror -Wextra -Wall

OBJ = $(SRC:.c=.o)

EXEC = display_file

RM = rm -f

all: $(NAME) $(EXEC)
	
%.o: %.c
	cc $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(EXEC): $(OBJ)
	cc $(FLAGS) $(OBJ) -o $(EXEC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
