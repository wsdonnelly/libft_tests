# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:58:52 by parkharo          #+#    #+#              #
#    Updated: 2021/11/18 10:27:26 by wdonnell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

#FLAGS = -Wall -Wextra -Werror ./test-o $(NAME) -include $(LIBDIR)/libft.h
CFLAGS = -Wall -Wextra -Werror -I *.h -o $(NAME) -include $(LIBDIR)/libft.h
LIBFLAGS = -L${LIBDIR} -lft 

#LIBDIR = ../LibFT
LIBDIR = ../libft
#LIBDIR = ../home_libft
#LIBDIR = ../eval
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
