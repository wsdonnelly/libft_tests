# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:58:52 by parkharo          #+#    #+#              #
#    Updated: 2021/11/02 15:07:10 by parkharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I *.h -o $(NAME)
LIBFLAGS = -L${LIBDIR} -lft 

LIBDIR = ../LibFT
NAME = test_ft

SRC = *.c 

all: $(NAME)

$(NAME):
	@echo "Compiling..."
	@$(CC) $(CFLAGS) $(SRC) $(LIBFLAGS) 

clean: 
	@echo "Cleaning up..."
	@/bin/rm -f $(NAME)

fclean: clean

re: fclean all
	@echo "Re-compiling..."