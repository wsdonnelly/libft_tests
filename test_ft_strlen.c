#include "libft_tests.h"

void test_ft_strlen(void)
{
	char *s1 = "hello world!";

	printf("REAL strlen \t%lu\n", strlen(s1));
	printf("ft_strlen \t%d\n", ft_strlen(s1));
}