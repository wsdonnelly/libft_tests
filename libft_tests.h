#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

void	test_ft_strlen(void);
void	test_ft_strcmp(void);

int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);

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
ft_strncpy
ft_strcat
ft_strncat
ft_strlcat
ft_strchr
ft_strrchr
ft_strstr
ft_strnstr
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