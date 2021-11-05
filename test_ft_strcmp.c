#include "libft_tests.h"

void test_ft_strcmp(void)
{
	TESTF("ft_strcmp");

	char *s1 = "hello world!";
	char *s2 = "Hello World";

	TESTN(1);
	int	x = strcmp(s1, s2);
	int y = ft_strcmp(s1, s2);
	printf("REAL strcmp \t%d\n", x);
	printf("ft_strcmp \t%d\n", y);

	if (x == y)
		TESTOK(1);
	else
		TESTFAILED(1);
		
}