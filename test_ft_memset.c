#include "libft_tests.h"

void	test_ft_memset()
{
	TESTF("ft_memset");

	TESTN(1);

	char s1[30];
	char s2[30];

	printf("\nOriginal libc function returns %s\n", (char *)memset(s1, 'X', sizeof(s1)));
	printf("To be tested  function returns %s\n", (char *)ft_memset(s2, 'X', sizeof(s2)));
	if (strcmp(s1, s2) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
	TESTN(2);

	printf("\nOriginal libc function returns %s\n", (char *)memset(s1, 'T', 15));
	printf("To be tested  function returns %s\n", (char *)ft_memset(s2, 'T', 15));
	if (strcmp(s1, s2) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
}
