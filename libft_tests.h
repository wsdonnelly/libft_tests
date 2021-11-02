#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

/* Change this path to represent your local path to libft.h file in your LibFT project folderr */
#include "../LibFT/libft.h" 

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <limits.h>


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


#endif
/*
ft_memset
ft_bzero
ft_memcpy
ft_memccpy
ft_memmove
ft_memchr
ft_memcmp
---ft_strlen
ft_strdup
ft_strcpy
---ft_strncpy
ft_strcat
ft_strncat
ft_strlcat
ft_strchr
ft_strrchr
---ft_strstr
---ft_strnstr
---ft_strcmp 
ft_strncmp
ft_atoi
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_toupper
ft_tolower
*/

//gcc *.o -L/Users/willdonnelly/Documents/hive_all/libft/ -lft