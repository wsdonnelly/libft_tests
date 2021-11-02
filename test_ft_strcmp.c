#include "libft_tests.h"

void test_ft_strcmp(void)
{
	char *s1 = "hello world!";
	char *s2 = "Hello World";

	printf("REAL strcmp \t%d\n", strcmp(s1, s2));
	printf("ft_strcmp \t%d\n", ft_strcmp(s1, s2));
}