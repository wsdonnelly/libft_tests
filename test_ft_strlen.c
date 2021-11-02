#include "libft_tests.h"


void test_ft_strlen(void)
{
	char *s1 = "hello world!";

	TESTF("ft_strlen")

	TESTN(1);
	printf("hello world!\n");
	int x = strlen(s1);
	int y = ft_strlen(s1);
	printf("Original libc function returns %d\n", x);
	printf("Function to  be tested returns %d\n", y);

	if (x == y)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	printf("Empty string\n");
	char *s2 = "";
	x = strlen(s2);
	y = ft_strlen(s2);
	printf("Original libc function returns %d\n", x);
	printf("Function to  be tested returns %d\n", y);

	if (x == y)
		TESTOK(1);
	else
		TESTFAILED(1);

}