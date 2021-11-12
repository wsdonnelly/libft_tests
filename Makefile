# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:58:52 by parkharo          #+#    #+#              #
#    Updated: 2021/11/12 10:22:39 by willdonnell      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

#FLAGS = -Wall -Wextra -Werror ./test-o $(NAME) -include $(LIBDIR)/libft.h
CFLAGS = -Wall -Wextra -Werror -I *.h -o $(NAME) -include $(LIBDIR)/libft.h
LIBFLAGS = -L${LIBDIR} -lft 

#LIBDIR = ../LibFT
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
