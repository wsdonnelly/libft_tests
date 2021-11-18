#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

#define PART(n)	printf("\n\n\e[0;33m>>>>>>>>>>>>>>>>>>>>>>PART %d<<<<<<<<<<<<<<<<<<<<<<\e[0m\n", n);
#define TESTF(fn)	printf("\n##############################\n\e[1;34mTesting %s function...\e[0m", fn);
#define TESTFAILED(n) printf("\e[1;31m\nTEST %d FAILED!\e[0m", n)
#define TESTOK(n) printf("\e[1;32m\nTEST %d OK!\e[0m", n)
#define TESTN(n) printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest # %d\n", n)

void	test_ft_atoi();
void	test_ft_bzero();
void	test_ft_isalnum();
void	test_ft_isalpha();
void	test_ft_isascii();
void	test_ft_isdigit();
void	test_ft_isprint();
void	test_ft_itoa();
void	test_ft_memalloc();
void	test_ft_memccpy();
void	test_ft_memchr();
void	test_ft_memcmp();
void	test_ft_memcpy();
void	test_ft_memdel();
void	test_ft_memmove();
void	test_ft_memset();
void	test_ft_putchar();
void	test_ft_putchar_fd();
void	test_ft_putendl();
void	test_ft_putendl_fd();
void	test_ft_putnbr();
void	test_ft_putnbr_fd();
void	test_ft_putstr();
void	test_ft_putstr_fd();
void	test_ft_strcat();
void	test_ft_strchr();
void	test_ft_strclr();
void	test_ft_strcmp();
void	test_ft_strcpy();
void	test_ft_strdel();
void	test_ft_strdup();
void	test_ft_strequ();
void	test_ft_striter();
void	test_ft_striteri();
void	test_ft_strjoin();
void	test_ft_strlcat();
void	test_ft_strlen();
void	test_ft_strmap();
void	test_ft_strmapi();
void	test_ft_strncat();
void	test_ft_strncmp();
void	test_ft_strncpy();
void	test_ft_strnequ();
void	test_ft_strnew();
void	test_ft_strnstr();
void	test_ft_strrchr();
void	test_ft_strsplit();
void	test_ft_strstr();
void	test_ft_strsub();
void	test_ft_strtrim();
void	test_ft_tolower();
void	test_ft_toupper();

#endif
