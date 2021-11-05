#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>


#define TESTF(fn)	printf("\n##############################\n\e[1;34mTesting %s function...\e[0m", fn);
#define TESTFAILED(n) printf("\e[1;31m\nTEST %d FAILED!\e[0m", n)
#define TESTOK(n) printf("\e[1;32m\nTEST %d OK!\e[0m", n)
#define TESTN(n) printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest # %d\n", n)

void	test_ft_strlen();
void	test_ft_strcmp();
void	test_ft_strncpy();
void	test_ft_strstr();
void	test_ft_strnstr();
void	test_ft_strcat();
void	test_ft_strncat();
void	test_ft_putchar();
void	test_ft_putnbr();
void	test_ft_strcpy();
void	test_ft_atoi();
void	test_ft_bzero();
void	test_ft_memset();
void	test_ft_memcpy();
void	test_ft_memccpy();
void	test_ft_memmove();
void	test_ft_memchr();
void	test_ft_memcmp();
void	test_ft_strdup();

#endif
