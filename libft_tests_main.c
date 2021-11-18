#include "libft_tests.h"

int main()
{	
	PART(1);
	test_ft_strlen();
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();

	PART(2);
	test_ft_toupper();
	test_ft_tolower();
	test_ft_memchr();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_bzero();
	test_ft_memset();

	PART(3);
	test_ft_memcpy();
	test_ft_strcpy();
	test_ft_strcat();
	test_ft_strcmp();
	test_ft_strstr();
	test_ft_memmove();
	test_ft_memcmp();

	PART(4);
	test_ft_strlcat();
	test_ft_strdup();
	test_ft_atoi();
	test_ft_memccpy();
	test_ft_strnstr();
	test_ft_strncmp();
	test_ft_strncpy();
	test_ft_strncat();

	PART(5);
	test_ft_memalloc();
	test_ft_putchar();
	test_ft_putstr();
	test_ft_putendl();
	test_ft_putnbr();
	test_ft_strnew();
	test_ft_strdel();
	test_ft_strclr();
	test_ft_strequ();
	test_ft_strnequ();
	test_ft_strsub();
	test_ft_strjoin();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();

	PART(6);
	test_ft_memdel();
	test_ft_striter();
	test_ft_striteri();
	test_ft_strmap();
	test_ft_strmapi();
	test_ft_strtrim();
	test_ft_strsplit();
	test_ft_itoa();

	return (0);
}
