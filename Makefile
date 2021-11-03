# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:58:52 by parkharo          #+#    #+#              #
#    Updated: 2021/11/03 12:23:24 by jlehtine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I *.h -o $(NAME) -include $(LIBDIR)/libft.h
LIBFLAGS = -L${LIBDIR} -lft 

LIBDIR = ../libft
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
